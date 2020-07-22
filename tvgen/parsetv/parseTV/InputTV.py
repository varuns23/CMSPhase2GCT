T_ETA = 34
T_PHI = 32
class Tower:
    def __init__(self,binary,eta=None,phi=None):
        self.cluster_et = int( binary[22:32],2 )
        self.tower_et = int( binary[12:22],2 )
        self.peak_phi = int( binary[9:12],2 )
        self.peak_eta = int( binary[6:9],2 )
        self.peak_time = int( binary[3:6],2 )
        self.hOe = int( binary[:3],2 )
        self.eta = eta
        self.phi = phi
    def __str__(self): return "({cluster_et},{tower_et},{peak_phi},{peak_eta},{peak_time},{hOe})".format(**vars(self))
    def binary(self): return "{0:03b}".format(self.hOe)+"{0:03b}".format(self.peak_time)+"{0:03b}".format(self.peak_eta)+"{0:03b}".format(self.peak_phi)+"{0:010b}".format(self.tower_et)+"{0:010b}".format(self.cluster_et)
class Link:
    def __init__(self,word):
        self.words = []
        self.add(word)
    def add(self,word): self.words.append("{0:064b}".format(int(word,16)))
    def process(self,ilink):
        self.towers = []
        binary = ""
        for i,word in enumerate(self.words): binary = word + binary
        # only 17 * 32b towers saved per link
        binary = binary[32:]
        nbits = len(binary)
        ntowers = nbits/32
        for i in range(ntowers):
            lo = nbits - 32*i
            hi = nbits - 32*(i+1)
            itower = 17*ilink + i
            eta = itower%17 + 1
            phi = itower/17
            if not phi < 32:
                eta *= -1
                phi = phi%32
            tower = Tower(binary[hi:lo],eta,phi)
            self.towers.append(tower)
    def unwrap(self): return self.towers
    def __str__(self):
        return "Link: \n" + "\n".join("\tTower: %s"%tower for tower in self.towers) + '\n'
class InputTV:
    def __init__(self,fname):
        self.fname = fname
        with open(fname,"r") as f: rawinput = [line.strip() for line in f.readlines() if "#" not in line and any(line.strip())]

        self.links = []
        for iline,line in enumerate(rawinput):
            data = line.split(" 0x00 ")[1:]
            if iline == 0:
                self.nlinks = len(data)
                for word in data: self.links.append( Link(word) )
            else:
                for ilink,word in enumerate(data): self.links[ilink].add(word)
        # Only 3 valid links, final link hold no tower info
        for i,link in enumerate( list(self.links) ): link.process(i)

        self.towers = self.unwrap()
    def unwrap(self):
        if hasattr(self,"towers"): return self.towers
        unwrapped = []
        for link in self.links: unwrapped += link.unwrap()
        return unwrapped
if __name__ == "__main__":
    fname = "test_in-gct.txt"
    tv = InputTV(fname)

    for tower in tv.towers: print tower,tower.eta,tower.phi
