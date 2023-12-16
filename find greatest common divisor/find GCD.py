a = 4
b = 6

#method 1 - highly recommend
def getGCD_method1(a, b):
    if a == 0:
        return b
    if b == 0:
        return a
    while a != b:
        if a > b:
            if a % b == 0:
                return b
            a = a % b
        else:
            if b % a == 0:
                return a
            b = b % a
    return a

#method 2 - euclid solution
def getGCD_method2(a, b):
    if a == 0:
        return b;
    if b == 0:
        return a;
    if a > b:
        return getGCD_method2(a - b, b)
    if b > a:
        return getGCD_method2(a, b - a)
    return a;

print("GCD: ", getGCD_method2(a, b))