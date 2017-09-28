while True:
    S = input().partition(" ")
    A = int(S[0])
    B = int(S[2])
    if A == 0 and B == 0 :
        break
    else:
        print(A + B)
