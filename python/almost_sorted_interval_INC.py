fp = open("input01.txt","r")
#n = int(input())
#ps = [int(val) for val in input().split()]
n = int(fp.readline())
ps = [int(val) for val in fp.readline().split()]
count = 0
subs = []
for ind in range(1,n):
    print(ps[ind],count,subs)
    if ps[ind]>ps[ind-1]:
        count=count+1+len(subs)
        subs.append(ps[ind])
    else:
        subs = []
count = count+n
print(count)
