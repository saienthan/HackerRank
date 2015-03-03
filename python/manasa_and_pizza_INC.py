n = int(input())
#n = 10
s = [int(val) for val in input().split()]
#s = [9,4,5,5,6,0,9,8,6,8]
tot = sum(s)
s.append(0)
dic = [0]*(tot+1)
dic[0] = 1
dic[1] = 3
ans = 0
for i in range(2,tot+1):
    dic[i] = (6*dic[i-1]) - dic[i-2]
for i in range(tot+1):
    print(i,dic[i])
for val in s:
    ans = ans + 2*dic[(tot-2*val)]
print(ans)


