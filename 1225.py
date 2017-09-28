[M,N] = input().split(' ')
sum = 0
for x in M:
    for y in N:
        sum += int(x)*int(y)
print(sum)
