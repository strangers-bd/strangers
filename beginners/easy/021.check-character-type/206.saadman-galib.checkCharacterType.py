char = input('Put your input here: ')

if char.isalpha():
    print(f'\'{char}\' is alphabet.')

elif char.isdigit():
    print(f'\'{char}\' is digit.')

else:
    print(f'\'{char}\' is special character.')