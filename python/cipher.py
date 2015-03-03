import sys
[n,k] = [int(val)for val in input().split()]
s = input()
a = [int(s[0])]
toggler = a[0]
first = 0
for ind in range(1,n):
    if ind>=k:
        toggler = toggler^a[ind-k]
    a.append(int(s[ind])^toggler)
    toggler = toggler^a[ind]
print(''.join(map(str,a)))
