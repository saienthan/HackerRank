n, m = list(map(int, input().split()))
maxval = (n * (n+1))/2
if m > maxval:
    print(-1)
else:
    print(0)
