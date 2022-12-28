char = input('Put your input here: ')

if char.isalpha():
    if char.lower() in ['a', 'e', 'i', 'o', 'u']:
        print(f'\'{char}\' is vowel.')
    else:
        print(f'\'{char}\' is consonant.')
else:
    print(f'\'{char}\' is not an alphabet.')