import sys
lines = [[int(val) for val in line.split()] for line in sys.stdin]
[n,m],*edges = lines
count = [0]*(n+1)
adjcmat = []
reach = [0]*(n+1)
numremove = 0

def createadjcmat():
    for i in range(n+1):
        inner = []
        for j in range(n+1):
            inner.append(0)
        adjcmat.append(inner)
    for edge in edges:
        adjcmat[edge[0]][edge[1]] = 1
        adjcmat[edge[1]][edge[0]] = 1

def isleaf(v):
    count = 0
    for val in adjcmat[v]:
        if val==1:
            count=count+1
    if count==1:
        return True
    else:
        return False
def dfs(v):
    reach[v] = 1
    global numremove
    if isleaf(v):
        return 1
    for i in range(1,n+1):
        if adjcmat[v][i] and not reach[i]:
            temp = dfs(i)
            count[v] = count[v] + temp
            if temp%2==0:
                numremove += 1
                adjcmat[v][i] == 0
                adjcmat[i][v] == 0
    count[v] += 1
    return count[v]

createadjcmat()
dfs(1)
print(numremove)
