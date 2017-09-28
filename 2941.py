A = input()
sum = 0
cro_a = 0
for x in A:
    if x in ['c=','c-','dz=','d-','lj','nj','s=','z='] :
        sum += 1
        cro_a += 1
    else :
        sum += 1
print(cro_a)
print(sum-cro_a)
