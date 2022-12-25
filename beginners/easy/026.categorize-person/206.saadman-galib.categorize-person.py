height = float(input("Input the height of the person (in centimetres) : "))
if(height >= 135 and height <= 225):
    if (height < 150):
        print("The person is Dwarf.")
    elif(height < 165):
        print("The person is average heighted.")
    elif(height <= 195):
        print("The person is taller.")
    else:
        print("Abnormal Height")
else:
    print("Abnormal Height")