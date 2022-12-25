import math 

p = float(input("Enter principle (amount): "))
n = float(input("Enter time: "))
r = float(input("Enter rate: "))

interest = p * ((1 + (r / 100)) ** n)

print(f"Compound Interest = {interest}")