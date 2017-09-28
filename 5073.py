while 1:
    S = input().split(" ")
    if S[0] == '0' and S[1] == '0' and S[2] == '0':
        break
    else:
        S.sort()
        a,b,c = int(S[0]) , int(S[1]), int(S[2])
        if c >= a + b:
            print('Invalid')
        else :
            if a == b and b == c and a == c:
                print('Equilateral')
            elif (a == b and b != c) or (a != b and b == c):
                print('Isosceles')
            elif a != b and b != c and a != c :
                print('Scalene')
