A = 0
B = 0

def fibonacci(n):
    if n == 0:
        A += 1
        return 0
    elif n == 1:
        B += 1
        return 1
    else :
        return fibonacci(n-1) + fibonacci(n-2)

T = int(input())
for _ in range(T):
    n = int(input())
    fibonacci(n)
    print(A,B)
