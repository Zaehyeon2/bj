S = input()
Lead = ''
Com = ''
Lead_num = 1
Con_num = 0
Lead_numm = 0
for x in S:
    if x == Lead:
        Lead_num += 1
    else :
        Com = x
        Con_num += 1
    if Con_num >= Lead_num:
        Lead = Com
        Lead_numm += 1
print(Lead)
