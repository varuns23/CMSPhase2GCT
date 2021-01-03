import os
line1=[]
line2=[]
line0=[]

# Initializatoin
tv1path = raw_input("input first file's path:") # user input the path of the first file
assert os.path.exists(tv1path), "No file find at, "+str(tv1path) # check if the path exist
tv2path = raw_input("input second file's path:") # user input the path of the second file
assert os.path.exists(tv1path), "No file find at, "+str(tv1path) #chekc if the path exist
N_TOTAL_LINKS = input("number of total links:") # user input the total number of links
N_ROWS = input("input number of rows:") # user input the number of rows

# Create the header of the form
header = "# CLK Link  0                  "
if N_TOTAL_LINKS < 11:
	for index in range(1, N_TOTAL_LINKS):
		header = header + "Link  " + str(index)+"                  "
else:
	header = header + "Link  1                  Link  2                  Link  3                  Link  4                  Link  5                  Link  6                  Link  7                  Link  8                  Link  9                  "
	for index in range(10, N_TOTAL_LINKS):
		header = header +"Link "+str(index)+"                  "
line0.append("# Automatically generated")
line0.append("")
line0.append(header)

# Read data from SLR1 and SLR2
SLRtv1 = open(tv1path,"r") # if want the path to be hardcode, comment out the initialization part and change this to: ("/nfs_scratch/hjia38/CMSPhase2GCT/etaStitch/hls/vivado_hls/data/test_out.txt","r")
for line in SLRtv1.readlines():
	line1.append(line[:-2])
SLRtv2 = open(tv2path, "r")  #( if want the path to be hardcode, comment out the initialization part and change this to: "/nfs_scratch/hjia38/CMSPhase2GCT/etaStitch/hls/vivado_hls/data/test_out.txt","r")
for line in SLRtv2.readlines():
	line2.append(line[5:-2])
# Merge
for index in range(3,3+N_ROWS):
	line0.append(line1[index]+line2[index])
line0 =  [line+'\n' for line in line0]

# Output 
outputpath = raw_input("input output file's path:")
SLRtv0 = open(outputpath, "w")#("/nfs_scratch/hjia38/CMSPhase2GCT/JetAlgo/hls/vivado_hls/data/test_SLR0.txt","w")
SLRtv0.writelines(line0)
SLRtv0.close()
