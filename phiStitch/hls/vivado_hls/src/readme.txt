GCT:

Each GCT takes input from 6 unique RCT cards and 2 neighbouring cards in each eta half.
Thus there is total of (1+6+1)x2 RCT cards feeding to GCT.

Each RCT region is sending 17x4 clusters: (32b)= 10b cluster Et, 10b tower Et, 3b cluster_eta, 3b cluster phi, 3b time, 3b hOe
Cluster (32b)= 10b cluster Et, 10b tower Et, 3b cluster_eta, 3b cluster phi, 3b time, 3b hOe
tower_eta (6b) and tower_phi (5b) are embedded in links coming from RCT

Packing of output from RCT or input to GCT at 25G:
- Each link has total 576b, divided into 9 words
- Each word in a link can carry 2 clusters, i.e. 32b

-  Each link carry half eta slice i.e. 17 towers in eta for each phi

- Link# 0  - 31: carry 17 phi slices (positive eta)
- Link# 32 - 64: carry 17 phi slices (negative eta)


Jet Algo
