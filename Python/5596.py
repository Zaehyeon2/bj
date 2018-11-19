A = input()
B = input()
As = int(A[0]) + int(A[2]) + int(A[4]) + int(A[6])
Bs = int(B[0]) + int(B[2]) + int(B[4]) + int(B[6])
if As < Bs :
    print(Bs)
elif As >= Bs :
    print(As)
