[n,c] = [int(val) for val in input().split()]
def intlen(n):
    if n<0:
        return 0
    return len(str(n))
def diff(n,val):
    count = 0
    temp = n
    temp2 = val
    while temp>0:
        count = count + abs((temp%10)-(temp2%10))
        temp = temp//10
        temp2 = temp2//10
    return count
start = n-(c*(10**(intlen(n)-1)))
if intlen(start)<intlen(n):
    start = 10**(intlen(n)-1)
if start%3!=0:
    start=start+1
if start%3!=0:
    start=start+1
end = n+(c*(10**(intlen(n)-1)))
if intlen(end)>intlen(n):
    end = (10**(intlen(n)))-1
count = 0
for val in range(start,end+1,3):
    if(diff(n,val)<=c):
        count = count + 1
print(count)
