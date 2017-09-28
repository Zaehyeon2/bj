def fastmult3(m,n):
    ans = 0
    while(n > 0):
        if n % 2 == 0:
            m, n = double(m), halve(n)
        else:
            ans += m
            n -= 1
    return ans

N = int(input())
for _ in range(N):
    a,b = input().split(" ")
    a, b = int(a),int(b)
    print((fastmult3(a,b))%10)
