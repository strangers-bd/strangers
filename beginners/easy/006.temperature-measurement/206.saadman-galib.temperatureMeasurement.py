temp = int(input(" Input days temperature: "))
if temp < 0:
    print("Freezing weather.")
elif temp < 10:
    print("Very cold weather.")
elif temp < 20:
    print("Cold weather.")
elif temp < 30:
    print("Normal in temp.")
elif temp < 40:
    print("It's hot.")
else:
    print("It's very hot.")