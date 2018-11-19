min_b = 2000
min_c = 2000
bn = 3
cn = 2
while bn != 0 :
    bp = int(input())
    if bp < min_b :
        min_b = bp
    bn -= 1
while cn != 0 :
    cp = int(input())
    if cp < min_c :
        min_c = cp
    cn -= 1
print(min_b + min_c - 50)
