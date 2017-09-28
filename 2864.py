A, B = input().split(" ")
minA, minB = A, B
maxA, maxB = A, B
for x in range(len(minA)):
    if minA[x] == '6' :
        minA[x] = '5'
for x in range(len(minB)):
    if minB[x] == '6' :
        minB[x] = '5'
for x in range(len(maxA)):
    if maxA[x] == '5' :
        maxA[x] = '6'
for x in range(len(maxB)):
    if maxB[x] == '5' :
        maxB[x] = '6'
print(minA, minB, maxA, maxB)
print(int(minA) + int(minB), int(maxA) + int(maxB))
