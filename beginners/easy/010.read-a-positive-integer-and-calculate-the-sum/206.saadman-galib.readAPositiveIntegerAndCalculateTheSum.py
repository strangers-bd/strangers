i = 0
sum = 0
while True:
    n = int(input("Enter a positive integer: "))
    if n >= 0:
        while i <= n:
            sum += i
            i += 1
        print("Sum =", sum)
        break
    else:
        print("Sorry to say but the number you have entered is a negative number. Pls enter again.")