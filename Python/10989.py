N = int(input())
S = [0]*10001
for i in range(N) :
    A = int(input())
    S[A] += 1
for x in range(10001) :
    if S[x] != 0:
        for i in range(S[x]):
            print(x)
