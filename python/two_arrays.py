numinputs = int(input())
for dummy in range(numinputs):
    [n,k] = [int(val) for val in input().split()]
    a = [int(val) for val in input().split()]
    b = [int(val) for val in input().split()]
    a = sorted(a)
    b = sorted(b,reverse=True)
    for i in range(len(a)):
        if not a[i]+b[i]>=k:
            print("NO")
            break
    else:
        print("YES")
