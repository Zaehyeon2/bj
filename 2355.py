N = input().partition(" ")
i = int(N[0])
j = int(N[2])
if i > j:
    tmp = j
    j = i
    i = tmp
i -= 1
print(int((j*(j+1)/2-i*(i+1)/2)))
