s1 = input()
s2 = input()
s1 = sorted(s1)
s2 = sorted(s2)
ct = 0
while True:
    if len(s1)==0 or len(s2)==0:
        ct = ct+len(s1)+len(s2)
        break
    if s1[0] == s2[0]:
        s1.pop(0)
        s2.pop(0)
    elif s1[0]<s2[0]:
        s1.pop(0)
        ct = ct+1
    elif s2[0]<s1[0]:
        s2.pop(0)
        ct = ct+1
print(ct)
