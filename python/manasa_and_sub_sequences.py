n = input()
size = len(n)
ans = 0
for i in range(size):
    pow11 = pow(11,size -i -1,1000000007)
    pow2 = pow(2,i,1000000007)
    ans = (ans + (int(n[i])*pow11*pow2)%1000000007)%1000000007
print(ans)
