numinputs = int(input())
for dummy in range(numinputs):
    m = int(input())
    n = int(input())
    c = [int(val) for val in input().split()]
    found = False
    for i in range(n):
        if found:
            break
        for j in range(i+1,n):
            if c[i]+c[j]==m:
                found = True
                if(i<=j):
                    print(i+1,j+1)
                else:
                    print(j+1,i+1)
                break


