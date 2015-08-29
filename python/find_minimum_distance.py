import math
n = int(input())
nums = list(map(int, input().split()))
avg = (sum(nums)/len(nums))
incr = 0
if avg <= (math.floor(avg) + (math.floor(avg)+1))/2:
    avg = math.floor(avg)
else:
    avg = math.floor(avg) + 1
diff = 0
for num in nums:
    diff += pow(abs(num - avg), 3)
diff1 = 0
avg1 = avg - 1
for num in nums:
    diff1 += pow(abs(num - avg1), 3)
diff2 = 0
avg2 = avg + 1
for num in nums:
    diff2 += pow(abs(num - avg2), 3)
if diff < diff1 and diff < diff2:
    print(avg)
elif diff1 < diff:
    while(diff1 < diff):
        diff = diff1
        diff1 = 0
        avg1 = avg1 - 1
        for num in nums:
            diff1 += pow(abs(num - avg1), 3)
    print(avg1+1)
elif diff2 < diff:
    while(diff2 < diff):
        diff = diff2
        diff2 = 0
        avg2 = avg2 + 1
        for num in nums:
            diff2 += pow(abs(num - avg2), 3)
    print(avg2-1)
