def lis():
    for i in range(1,n):
        for j in range(0,i):
            if a[i]>a[j] and (final[i])<=(final[j]):
                final[i] = final[j]
        final[i] = final[i]+1

n = int(input())
a = []
#n = 5
#a = [2,7,4,3,8]
for dummy in range(n):
    a.append(int(input()))
final = [0]*(n)
final[0] = 1
lis()
print(max(final))
