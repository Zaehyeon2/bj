test = int(input())
total = 0
while test != 0 :
    price = int(input())
    total += price
    option = int(input())
    while option != 0 :
        opt = input().partition(" ")
        total += (int(opt[0]) * int(opt[2]))
        option -= 1
    test -= 1
    print(total)
    total = 0
