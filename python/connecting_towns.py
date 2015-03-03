numinputs = int(input())
for dummy in range(numinputs):
    input()
    n = [int(val) for val in input().split()]
    prod = 1
    for val in n:
        prod = prod * val
    print(prod)
