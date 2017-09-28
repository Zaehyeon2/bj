while 1:
    small = 0
    big = 0
    num = 0
    space = 0
    S = input()
    for x in S:
        if x == ' ':
            space += 1
        elif x in ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']:
            small += 1
        elif x.isdigit() == 1:
            num += 1
        else :
            big += 1
    print(small,big,num,space)
