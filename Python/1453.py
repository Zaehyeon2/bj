N = int(input())
sit = [0]*101
ans = 0
guest = list(map(int,input().split(" ")))
for i in range(N):
    if sit[guest[i]] == 0:
        sit[guest[i]] = 1
    else :
        ans += 1
print(ans)
