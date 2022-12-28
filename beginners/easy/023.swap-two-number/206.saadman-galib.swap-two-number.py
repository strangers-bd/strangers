a, b = map(int, input("Put your input here: ").split())

a = a ^ b
b = a ^ b
a = a ^ b

print(f"{a} {b}")
