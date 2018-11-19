def fastmult3(m,n):
    ans = 0
    while(n > 0):
        if n % 2 == 0:
            m, n = m*m, n//2
        else:
            ans += m
            n -= 1
    return ans

A, B, C = list(map(int,input().split(" ")))
print(fastmult3(A,B)%C)
