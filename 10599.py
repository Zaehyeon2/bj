while 1:
    a,b,c,d = input().split(" ")
    a,b,c,d = int(a), int(b), int(c), int(d)
    if a == 0 & b == 0 & c == 0 & d == 0:
        break
    else:
        print(c-b,d-a)
