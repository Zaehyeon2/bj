N = int(input())
reflect = []*N
ans = []*N
for i in range(N):
    reflect += [input()]
mind = int(input())
if mind == 1 :
    for i in range(N):
        print(reflect[i])
elif mind == 2:
    for i in range(N):
        for j in range(N):
            ans += reflect[i][N-j-1]
    for i in range(N):
        for j in range(N):
            print(ans[i*N+j],end='')
        print()
else :
    for i in range(N-1,-1,-1):
        print(reflect[i])
