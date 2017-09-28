count = 0
B_win = 0
A_win = 0
round = int(input())
while count < round :
    S = input().partition(" ")
    A = int(S[0])
    B = int(S[2])
    if A > B :
        A_win += 1
        count += 1
    elif B > A :
        B_win += 1
        count += 1
    else :
        count += 1
print(A_win, B_win)
