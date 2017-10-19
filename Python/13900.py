N = int(input())
inp = list(map(int,input().split(" ")))
ans = 0
for i in range(N):
    for j in range(i+1,N):
        ans += inp[i]*inp[j]
print(ans)
