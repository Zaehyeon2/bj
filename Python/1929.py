A,B = input().split(" ")
A, B = int(A), int(B)
real_sosu = []
Sosu = [1]* 1000000000000
Sosu[0], Sosu[1] = 0,0
for i in range(A,B+1):
    for j in range(i+1,B+1):
        if Sosu[i] == 1 and j%i == 0:
            Sosu[j] = 0
for i in range(len(Sosu)):
    if Sosu[i] == 1:
        real_sosu += [i]
for i in range(len(real_sosu)):
    print(real_sosu[i])
