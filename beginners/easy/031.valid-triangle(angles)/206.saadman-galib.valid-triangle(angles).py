total = 0

for i in range(1,4):
    angle = float(input(f"Enter {i} angle of triangle: = "))
    total += angle

if(total == 180):
    print("Valid Triangle")
else:
    print("Invalid Triangle")