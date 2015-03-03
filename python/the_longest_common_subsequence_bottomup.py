import sys
def lcs(n,m):
    for i in range(n+1):
        for j in range(m+1):
            if i==0 or j==0:
                c[i][j] = 0
            else:
                if a[i-1] == b[j-1]:
                    c[i][j] = c[i-1][j-1]+1
                else:
                    c[i][j] = max(c[i][j-1],c[i-1][j])

def trace():
    length = c[n][m]
    i,j = n,m
    final = []
    while length>0:
        print(length)
        if a[i-1]==b[j-1]:
            final.insert(0,a[i-1])
            i = i-1
            j = j-1
            length = length-1
        elif c[i-1][j]==length:
            i = i-1
        elif c[i][j-1]==length:
            j = j-1
    return final


lines = [[int(val) for val in line.split()] for line in sys.stdin]
[n,m],a,b = lines
c = []
for i in range(n+1):
    inside = []
    for j in range(m+1):
        inside.append(0)
    c.append(inside)
lcs(n,m)
print(' '.join(list(map(str,trace()))))
