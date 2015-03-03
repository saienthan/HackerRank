import sys
lines = [[int(val) for val in line.split()] for line in sys.stdin]
[n],a,[p,q] = lines
def main():
    maxdiff = 0
    global a,p,q,n
    a = sorted(a)
    soln = 0
    if p>q:
        p,q = q,p
    if a[0]>=q:
        print(p)
        return

    elif a[n-1]<=p:
        print(q)
        return

    for i in range(0,len(a)-1):
        temp = (a[i]+a[i+1])//2
        if temp-a[i]>maxdiff and temp<=q and temp>=p:
            soln = temp
            maxdiff = temp-a[i]
        elif temp>q and q-a[i]>maxdiff:
            soln = q
            maxdiff = q-a[i]
        elif temp<p and a[i+1]-p>maxdiff:
            soln = p
            maxdiff = a[i+1]-p
    if a[n-1]<q:
        temp = q-a[n-1]
        if temp>maxdiff:
            soln = q
            maxdiff = temp
    if a[0]>p:
        temp = a[0]-p
        if temp>=maxdiff:
            soln = p
            maxdiff = temp
    print(soln)
if __name__=="__main__":
    main()
