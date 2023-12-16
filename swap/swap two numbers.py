a = 1
b = 2

#using unzip tuple techique
a, b = b, a
print(a, b)

#using temp variable method
temp = a
a = b
b = temp
print(a, b)

#using sum technique
a = a + b
b = a - b
a = a - b
print(a, b)