import sys
lines = [[int(x) for x in line.split()] for line in sys.stdin]
[n,t],width,*cases = lines
for case in cases:
    print(min(width[case[0]:case[1]+1]))
