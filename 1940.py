N = int(input())
M = int(input())
A = list(map(int,input().split(" ")))
ans = 0
for i in range(N):
    for j in range(i+1,N):
        if A[i] + A[j] == M:
            ans += 1
print(ans)
