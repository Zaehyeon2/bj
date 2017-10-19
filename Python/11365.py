while True :
    Code = input()
    if Code == 'END':
        break
    else :
        leng = int(len(Code))
        for i in range(leng-1,-1,-1):
            print(Code[i],end="")
        print()
