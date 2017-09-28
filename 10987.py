S = input()
sum = 0
for i in range(0,len(S)):
    if S[i] == 'a' or S[i] == 'e' or S[i] == 'i' or S[i] == 'o' or S[i] == 'u':
        sum += 1
print(sum)
