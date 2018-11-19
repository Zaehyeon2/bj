N = int(input())
for _ in range(N):
    sum = 0
    score = 1
    S = input()
    for x in S:
        if x == 'O':
            sum += score
            score += 1
        else :
            score = 1
    print(sum)
