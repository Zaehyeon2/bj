N = int(input())
for i in range(N):
    S = input()
    if len(S) == 1:
        Cap = S[0]
        Cap = str.capitalize(Cap)
        print(Cap)
    else :
        Cap = S[0]
        Else = S[1:]
        Cap = str.capitalize(Cap)
        print(Cap + Else)
