n = int(input())
a = list(map(int, input().split()))
a.sort()
diff = [0] * len(a)
for i in range(1, len(a)):
    diff[i] = (a[i]-a[i-1])
diff = diff[1:]
minval = min(diff)
i = 1
for d in diff:
    if minval == d:
        print(a[i-1], a[i], end = " ")
    i += 1
print()
