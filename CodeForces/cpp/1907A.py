tsc = int(input())

for _ in range(tsc):
    s = str(input())
    col = s[0]
    row = s[1]
    list = []
    for i in range(1, 9):
        if (i != int(row)):
            list.append(s[0] + str(i))
    
    for i in range(97, 105):
        if (chr(i) != col):
            list.append(chr(i) + row)
            
    for item in list:
        print(item)