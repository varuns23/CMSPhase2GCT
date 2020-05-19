GCT:

Each GCT takes input from 6 unique RCT cards and 2 neighbouring cards in each phi.
Thus there is total of (1+6+1)x2 RCT cards feeding to GCT.

Each RCT region is sending 17x4 clusters.ster (30b)= 10b cluster Et, 10b tower Et, 3b cluster_eta, 3b cluster phi, 3b hOe, 1b Iso
Cluster (30b)= 10b cluster Et, 10b tower Et, 3b cluster_eta, 3b cluster phi, 3b hOe, 1b Iso
tower_eta (6b) and tower_phi (5b) are embedded in links coming from RCT

Packing of output from RCT or input to GCT:
- Each link has total 384b, divided into 6 words
- Each word in a link can carry 2 clusters, i.e. 60b and 4 are left empty

- 2-links can carry 1-entire phi for 6-unique RCT regions
- Link# 0-33: carry 17 phi slices (positive eta)
- Link# 34-67: carry 17 phi slices (negative eta)

- For neighbouring 
