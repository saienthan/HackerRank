n = int(input())
rating = []
for dummy in range(n):
    rating.append(int(input()))
can = [1] * n
for ind in range(1, len(rating)):
    if(rating[ind-1] < rating[ind]):
        can[ind] = can[ind-1]+1
    else:
        revi = ind
        while revi > 0 and rating[revi-1] > rating[revi]:
            can[revi-1] = max(can[revi-1], can[revi] + 1)
            revi -= 1
print(sum(can))
