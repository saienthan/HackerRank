import itertools

def kbits(n, k):
    result = []
    if n < 10:
        for bits in itertools.combinations(range(n), k):
            s = ['0'] * n
            for bit in bits:
                s[bit] = '1'
            result.append(''.join(s))
    else:
        for i in range(min(n, 5)):
            if i <= k:
                result.append((k-i)*'1' + '0' + '1'*i + (n-1-k)*'0')
    return result

T = int(input())
for dummy in range(T):
    N, K = map(int, input().split())
    p = []
    for i in range(N):
        p.append(float(input()))
    p = sorted(p, reverse=True)
    print(p)
    pcount = 0
    for bits in kbits(N, K):
        prob = 1
        for bitpos in range(len(bits)):
            if bits[bitpos] == '1':
                prob *= p[bitpos]
            else:
                prob *= (1-p[bitpos])
        pcount += prob
    print("Case {}: {:.2f}".format(dummy+1, pcount))
