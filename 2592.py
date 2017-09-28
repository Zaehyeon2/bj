S = []
for i in range(0,10):
    S += [input()]
Max = S[0]
length = 1
record = 1
for x in S[1:]:
    if x == Max:
        length += 1
        record += 1
    else :
        length = 1
    if record < length:
        record = length
        Max = x
sum = 0
for i in S:
    sum += int(i)
sum /= 10
print(int(sum))
print(Max)
