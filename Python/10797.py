Num = int(input())
Car_n = input().partition(" ")
count = 0
a = 0
Number = 0
while count < 5 :
    b = int(Car_n[a])
    if b == Num :
        Number += 1
    a += 2
print(Number)
