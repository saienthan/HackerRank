def binsearch(num):
    l = 1
    u = 100
    while True:
        m = (l+u)//2
        if m==num:
            print("Found")
            break
        elif l>u or l==u:
            print("Not Found")
            break
        if num>m:
            l = m+1
        elif num<m:
            u = m-1
for num in range(0,102):
    binsearch(num)
