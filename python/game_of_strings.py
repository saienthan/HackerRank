T = int(input())
for dummy in range(T):
    inpst = input()
    count = 0
    for char in inpst:
        count += ord(char) - ord('a')
    if(count % 2 == 1):
        print('Alice')
    else:
        print('Bob')
