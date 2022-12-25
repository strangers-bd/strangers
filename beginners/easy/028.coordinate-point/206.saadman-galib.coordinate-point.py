x, y = map(int, input("Input the values for X and Y coordinate : ").split())

if (x > 0 and y > 0):
    quandrant = "in the First quandrant"
elif (x < 0 and y > 0):
    quandrant = "in the Second quandrant"
elif(x < 0 and y < 0):
    quandrant = "in the Third quandrant"
elif(x > 0 and y < 0):
    quandrant = "in the Fourth quandrant"
else:
    quandrant = "at the origin"

print(f"The coordinate point ({x},{y}) lies {quandrant}")