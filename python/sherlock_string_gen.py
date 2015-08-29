from math import ceil, floor
T = int(input())
dummy = 0
while dummy < T:
    n, k = map(int, input().split())
    minlength = floor(k/2)*2 + ceil(k/2)*1
    if(n < minlength or (n - minlength) % 2 != 0):
        print("No such string.")
    elif n - minlength >= 0:
        count = n - minlength
        print('a'*(count), end = '')
        for i in range(k):
            if (i+1) % 2 == 0:
                print(chr(i+ord('a'))*2, end = '')
            else:
                print(chr(i+ord('a')), end = '')
        print()
    dummy += 1
