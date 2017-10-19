hour, minu, sec = list(map(int,input().split(":")))
minn += sec//60
sec %= 60
hour += minu//60
minu %= 60
hour %= 24
