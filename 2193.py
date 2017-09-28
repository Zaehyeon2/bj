N = int(input())
ans = 0
if N == 0:
    print("0")
else:
    for i in range(2**(N-1),2**(N)):
        if '11' not in bin(i)[2:] and bin(i)[2] != '0':
            ans += 1
print(ans)
