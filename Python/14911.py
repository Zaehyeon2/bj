a = list(map(int,input().split(" ")))
b = int(input())
length = len(a)
ans = 0
a.sort()
for i in range(length) :
    for j in range(i + 1, length) :
        if a[i] + a[j] == b :
            ans += 1
            print(str(a[i]) + " " + str(a[j]))
print(ans)
