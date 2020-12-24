line1=[]
line2=[]
line0=[]
SLRtv1 = open("/nfs_scratch/hjia38/CMSPhase2GCT/etaStitch/hls/vivado_hls/data/test_out.txt","r")
for line in SLRtv1.readlines():
	line1.append(line[:-2])
SLRtv2 = open("/nfs_scratch/hjia38/CMSPhase2GCT/etaStitch/hls/vivado_hls/data/test_out.txt","r")
for line in SLRtv2.readlines():
	line2.append(line[5:-2])
line0.append("# Automatically generated")
line0.append("")
line0.append("# CLK Link  0                  Link  1                  Link  2                  Link  3                  Link  4                  Link  5                  Link  6                  Link  7                  Link  8                  Link  9                  Link 10                  Link 11                  Link 12                  Link 13                  Link 14                  Link 15                  Link 16                  Link 17                  Link 18                  Link 19                  Link 20                  Link 21                  Link 22                  Link 23                  Link 24                  Link 25                  Link 26                  Link 27                  Link 28                  Link 29                  Link 30                  Link 31                  Link 32                  Link 33                  Link 34                  Link 35                  Link 36                  Link 37                  Link 38                  Link 39                  Link 41                  Link 41                  Link 42                  Link 43                  Link 44                  Link 45                  Link 46                  Link 47                  Link 48                  Link 49                  Link 50                  Link 51                  Link 52                  Link 53                  Link 54                  Link 55                  Link 56                  Link 57                  Link 58                  Link 59                  Link 60                  Link 61                  Link 62                  Link 63                  ")
for index in range(3,12):
	line0.append(line1[index]+line2[index])
line0 =  [line+'\n' for line in line0]
SLRtv0 = open("/nfs_scratch/hjia38/CMSPhase2GCT/JetAlgo/hls/vivado_hls/data/test_SLR0.txt","w")
SLRtv0.writelines(line0)
SLRtv0.close()
