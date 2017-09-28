S = input().partition(" ")
A = S[0]
B = S[2]
An = A[2]+A[1]+A[0]
Bn = B[2]+B[1]+B[0]
if An > Bn:
    print(An)
else:
    print(Bn)
