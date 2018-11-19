[L,M] = input().split(" ")
L, M = int(L), int(M)
Min = 10000000000000000000
for i in range(L,M+1):
    i = str(i)
    sum = 0
    for x in i:
        if x == '8':
            sum += 1
    if Min > sum :
        Min = sum
print(Min)
