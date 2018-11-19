N = input().split(" ")
A = input().split(" ")
B = input().split(" ")
ans = ''
for x in A:
    if x in B:
        B.remove(x)
    else :
        ans += x
        ans += ' '
if ans == '':
    print(0)
else :
    print(ans)
