#numinputs = int(input())
numinputs = 1
for dummy in range(numinputs):
    #n = int(input())
    #prices = [int(val) for val in input().split()]
    n = 14
    prices = [30887,92778,36916,47794,38336,85387,60493,16650,41422,2363,90028,68691,20060,97764]
    maxers = [0]
    profits = [0]*n
    profit = 0
    for i in range(1,n):
        if prices[i]>prices[i-1]:
            if maxers[i-1]!=0:
                maxers.append(maxers[i-1]+1)
            else:
                count = 0
                for j in range(i-1,-1,-1):
                    if prices[j]>prices[i]:
                        break
                    count += 1
                maxers.append(count)
            if maxers[i]!=1:
                profits[i] = (profits[i-1] - 2*prices[i-1] + (prices[i]*maxers[i]))
            else:
                profits[i] = (profits[i-1] - prices[i-1] + (prices[i]*maxers[i]))
        else:
            profits[i] = profits[i-1]
            maxers.append(0)
    #print(profits[-1])
    print(profits)
    print(prices)
    print(maxers)
