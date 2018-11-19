while True :
    s = input().partition(" ")
    if  (s[0] and s[2]).isdigit() :
        print(int(s[0]) + int(s[2]))
