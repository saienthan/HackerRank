import sys
lines = [[int(val) for val in line.split()] for line in sys.stdin]
[n],grps = lines
maxval = grps[0]
poss = []
final = []
sm = 0
for grp in grps:
    if maxval<grp:
        maxval = grp
    sm=sm+grp
    poss.append(sm)
for val in poss:
    if poss[n-1]%val==0 and val>=maxval:
        final.append(val)
for val in final.copy():
    temp = val
    for grp in grps:
        temp = temp-grp
        if(temp<0):
            try:
                final.remove(val)
            except:
                pass
            break
        elif(temp==0):
            temp = val
    else:
        if(temp!=val):
            try:
                final.remove(val)
            except:
                pass

print(' '.join(map(str,(final))))
