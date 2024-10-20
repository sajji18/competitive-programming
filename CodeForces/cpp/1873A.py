tsc = int(input())

for _ in range(tsc):
    given_string = str(input())
    correct_string = "abc"
    res, ans = 0, 0
    
    for char in given_string:
        if char == correct_string[res]:
            ans = 1
            break
        res += 1
    
    if ans == 1:
        print("YES")
    else:
        print("NO")
    
    