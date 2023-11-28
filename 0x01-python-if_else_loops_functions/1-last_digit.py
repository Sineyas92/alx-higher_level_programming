#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_number = abs(number) % 10
if (number < 0):
    last_number *= -1
if (last_number > 5):
    last_text = "and is greater than 5"
elif (last_number == 0):
    last_text = "and is 0"
elif (last_number < 6 and last_number != 0):
    last_text = "and is less than 6 and not 0"
print("Last digit of {} is {} {}".format(number, last_number, last_text))
