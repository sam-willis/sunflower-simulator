newnode superH 0 0 0
sizemem	96000000
setmemrlatency 100
setmemwlatency 100
cacheoff

--cacheinit 1024 16 1
cd "/home/sam/Code/sunflower-simulator/benchmarks/source/shellsort"
srecl		ssort.sr
registerstabs ssort.stabs
run
on
valuestats
