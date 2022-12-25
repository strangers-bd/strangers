import math

a, b, c = map(float, input("Enter coefficients a, b and c: ").split())

discriminant = b**2 - 4*a*c

if discriminant > 0:
    x1 = (-b + math.sqrt(discriminant)) / (2*a)
    x2 = (-b - math.sqrt(discriminant)) / (2*a)
    print(f"root1 = {x1} and root2 = {x2}")

elif discriminant == 0:
    x = -b / (2*a)
    print(f"root1 = {x} and root2 = {x}")

elif discriminant < 0:
    x1 = (-b + math.sqrt(-discriminant) * 1j) / (2*a)
    x2 = (-b - math.sqrt(-discriminant) * 1j) / (2*a)
    print(f"root1 = {round(x1.real, 2):.2f}+{round(x1.imag, 2):.2f}i and root2 = {round(x2.real, 2):.2f}{round(x2.imag, 2):.2f}i")

else:
    print("The quadratic equation has no real roots.")
