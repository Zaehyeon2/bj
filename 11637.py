N = int(input())
for _ in range(N):
    Pn = int(input())
    Max = 0
    Same_p = 0
    for i in range(1,Pn+1):
        A = int(input())
        if A >= Max :
            Max = A
            Max_p = i
            if A = Max:
                Same_p = 1
            else :
                Same_p = 0
