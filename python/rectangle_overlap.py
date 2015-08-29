x1, y1, x2, y2 = map(float, input().split())
x3, y3, x4, y4 = map(float, input().split())
if x3 >= x1 and x3 <= x2 and y3 >= y2 and y3 <= y1:
    print("overlap")
elif x4 >= x1 and x4 <= x2 and y4 >= y2 and y4 <= y1:
    print("overlap")
else:
    print("no overlap")
