#n = int(input())
#a = [int(val) for val in input().split()]
#m = int(input())
#b = [int(val) for val in input().split()]
f = open("input03.txt","r")
n = int(f.readline())
a = [int(val) for val in f.readline().split()]
m = int(f.readline())
b = [int(val) for val in f.readline().split()]
a = sorted(a)
b = sorted(b)
i = 0 
j = 0 
while i<n:
    if a[i] == b[j]:
        i += 1
        j += 1
    else:
        if b[j]==b[j+1]:
            while b[j]==b[j+1]:
                j += 1
        print(b[j],end=" ")
        j += 1
while j<m:
    if j<n-1:
        if b[j]==b[j+1]:
            j += 1
            continue
    print(b[j],end=" ")
    j += 1

