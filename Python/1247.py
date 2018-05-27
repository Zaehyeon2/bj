for i in range(3):
    a=sum([input() for i in range(input())])
    print '0' if a==0 else ('+' if a>0 else '-')
