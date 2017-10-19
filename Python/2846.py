N = int(input())
UP = input().partition(" ")
Max = 0
for roop in range(0,N,2):
    if int(UP[roop]) > Max :
        Max = UP[roop]
print(Max)
