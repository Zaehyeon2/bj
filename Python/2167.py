N, M = list(map(int,input().split(" ")))
inp = [0]*N
for i in range(N):
    inp[i] = input().split(" ")
K = int(input())
for _ in range(K):
    x, y, i, j = list(map(int,input().split(" ")))
    sum = 0
    for a in range(x-1,i):
        for b in range(y-1,j):
            sum += int(inp[a][b])
    print(sum)
