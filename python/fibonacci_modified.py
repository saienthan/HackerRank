[a,b,n] = [int(val) for val in input().split()]
vals = [a,b]
for i in range(2,n+1):
    vals.append((vals[i-1]*vals[i-1])+vals[i-2])
print(vals[n-1])
