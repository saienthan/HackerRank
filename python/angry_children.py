packets = int(input())
req = int(input())
candies = []
val = float("inf")
for num in range(packets):
    candies.append(int(input()))
candies = sorted(candies)
for num in range(len(candies)-req):
    diff = candies[num+req-1]-candies[num]
    if(val>diff):
        val = diff
print(val)
