a = list(map(int,input().split(" ")))
length = len(a)
for i in range(1, length) :
    if a[i] < a[i-1] :
        print(Bad)
        return
print(Good)
