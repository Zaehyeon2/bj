count = 0
test_n = int(input())
while count < test_n :
    S = input().partition(" ")
    candy = int(S[0])
    person = int(S[2])
    print("You get", int( candy / person ),"piece(s) and your dad gets", candy % person,"piece(s).")
