S = input().partition(" ")
H = int(S[0])
M = int(S[2])
minus = 45
if M < 45 :
    minus -= M
    H -= 1
    M = 60 - minus
    if H < 0 :
        H = 24 + H
elif M >= 45 :
    M -= 45
print(H,'%02d' %M)
