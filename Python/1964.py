import sys
sys.setrecursionlimit(10000000)
def Tet(N):
    if N == 1:
        return 5
    if N > 0:
        return 4*N - N + 1 + Tet(N-1)
    else :
        return 1
print(Tet(int(input()))%45678)
