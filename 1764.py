a,b = input().split(" ")
a,b = int(a), int(b)
L = []
S = []
ans = []
count = 0
for _ in range(a):
    L += [input()]
for _ in range(b):
    S += [input()]
for x in L:
    if x in S:
        ans += [x]
        count += 1
ans.sort()
print(count)
for i in range(len(ans)):
    print(ans[i])
