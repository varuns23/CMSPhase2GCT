import os
line1=[]
line2=[]
line0=[]
tv1path = raw_input("input first file's path:")
assert os.path.exists(tv1path), "No file find at, "+str(tv1path)
tv2path = raw_input("input second file's path:")
assert os.path.exists(tv1path), "No file find at, "+str(tv1path)
N_TOTAL_LINKS = input("number of total links:")
header = "# CLK Link  0                  "
if N_TOTAL_LINKS < 11:
	for index in range(1, N_TOTAL_LINKS):
		header = header + "Link  " + str(index)+"                  "
else:
	header = header + "Link  1                  Link  2                  Link  3                  Link  4                  Link  5                  Link  6                  Link  7                  Link  8                  Link  9                  "
	for index in range(10, N_TOTAL_LINKS):
		header = header +"Link "+str(index)+"                  "
SLRtv1 = open(tv1path,"r") #("/nfs_scratch/hjia38/CMSPhase2GCT/etaStitch/hls/vivado_hls/data/test_out.txt","r")
for line in SLRtv1.readlines():
	line1.append(line[:-2])
SLRtv2 = open(tv2path, "r")  #("/nfs_scratch/hjia38/CMSPhase2GCT/etaStitch/hls/vivado_hls/data/test_out.txt","r")
for line in SLRtv2.readlines():
	line2.append(line[5:-2])
line0.append("# Automatically generated")
line0.append("")
line0.append(header)
N_ROWS = input("input number of rows:")
for index in range(3,3+N_ROWS):
	line0.append(line1[index]+line2[index])
line0 =  [line+'\n' for line in line0]
outputpath = raw_input("input output file's path:")
SLRtv0 = open(outputpath, "w")#("/nfs_scratch/hjia38/CMSPhase2GCT/JetAlgo/hls/vivado_hls/data/test_SLR0.txt","w")
SLRtv0.writelines(line0)
SLRtv0.close()
