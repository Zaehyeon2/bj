
[m,n] = input().split(" ")
m,n = int(m), int(n)
while(1):
    if n == 0:
        break
    tmp = n
    n = m % n
    m = tmp
print(m)
