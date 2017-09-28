S = input()
Sb = ''
for i in range(len(S)-1,-1,-1):
    Sb += S[i]
if S == Sb :
    print("1")
else :
    print("0")
