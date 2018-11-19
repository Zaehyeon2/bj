S = input()
Sum = 0
Sum96 = 0
for i in range(len(S)):
    if S[i] == '9' or S[i] == '6':
        Sum96 += 1
    else :
        Sum += 1
if Sum96%2 == 0:
    Sum += Sum96//2
else :
    Sum += (Sum96//2) + 1
print(Sum)
