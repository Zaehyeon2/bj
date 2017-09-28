N = int(input())
A = [0]*10001
An = input().split(" ")
for i in range(N):
    An[i] = int(An[i])
for x in An:
    A[int(x)] = 1
M = int(input())
Bn = input().split(" ")
for x in Bn:
    if int(x) > max(An):
        print('0')
    else:
        if A[int(x)] == 1:
            print('1')
        else :
            print('0')
