str1 = input()
str2 = input()

print(f"{len(str1)} {len(str2)}")
print(str1 + str2)

list1 = list(str1)
list2 = list(str2)

temp = list1[0]
list1[0] = list2[0]
list2[0] = temp

str1 = ''.join(list1)
str2 = ''.join(list2)

print(f"{str1} {str2}")