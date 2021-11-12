"""
Finding Greatest Common Divisor(GCD) of two number using euclid algorithm
"""


def gcd(a, b):
    while b != 0:
        temp_var = a
        a = b
        b = temp_var % b
    return a


print(gcd(60, 96))
print(gcd(20, 8))
