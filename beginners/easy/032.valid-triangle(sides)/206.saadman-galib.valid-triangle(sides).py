sides = []

is_valid = False

for i in range(1, 4):
    side = float(input(f"Enter {i} side of triangle: = "))
    sides.append(side)

for i in range(0, 3):
    sides.append(sides[i])
    a = sides[i]
    b = sides[i + 1]
    c = sides[i + 2]
    if((a + b) > c):
       is_valid = True
    else:
        is_valid = False
        break

if(is_valid):
    print("Valid Triangle")
else:
    print("Invalid Triangle")