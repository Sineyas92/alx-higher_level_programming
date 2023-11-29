#!/usr/bin/python3
for digit_one in range(10):
    for digit_two in range(digit_one + 1, 10):
        print("{:d}{:d}".format(digit_one, digit_two), end="")
        if digit_one != 8 or digit_two != 9:
            print(", ", end="")
print()
