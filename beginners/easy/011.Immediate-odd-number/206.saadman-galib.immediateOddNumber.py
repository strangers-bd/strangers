n = int(input())

if n>=0:
    if n % 2 == 0:
        n += 1
        print("Your immediate next odd number is =", n)
    else:
        print("Invalid input")
    
else:
    print("You have entered a negative number")