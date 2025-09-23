# AT 6th loop notes 
# 1 what is a loop
    # a neverending code till a specific condition is met
# 2 what are the two types of loops
    # four loops, while loops
# 3 what is itertioin
    # how many times a loop has run, one instance of a loop
# 4 what are lists 
    #they allow you to store multiple pieaces of information within the same thing of code
#5 how do you make lists in python
    # you create a string of code with multple inputs and outputs
# 6 how do you make loops in python
    # you create a list and then go from there
# 7 how do you make while loops in python
    # you have to follow the three steps it needs which are listed below and create code within it
import datetime

current = datetime.datetime.now()
hour = current.hour

print(f"the time is: {current}")
print(f"The hour is: {hour}")

# lists
    # allows you to store multiple pieaces of information within the same thing
siblings = ["micheal", "will", "kayson", "murphy", "ander", "covery", "reia"]

print(siblings[3])
print(siblings)
siblings[4] = "reia"
siblings[6] + "will"
siblings.remove("micheal")
print(siblings)

#for loop
for sibling in siblings: 
    #print(f"Hello {sibling}")
    print("hi")

for x in range(20,1, -1):
    print(x)

#while loops
#infinite loop
#      print("Oh NO!")

#1. iteration
#2 cha condition
#3 increase iteration

# good while loop
i = 1

while i < 21:
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i += 1

import random

number = random.randint(1,20)
x = 1
"""while x != number:
    print("duck")
    x += 1

print("goose!")"""

while True: 
    if number == x:
        print("goose!")
        break
    else:
        print("Duck")
        x += 1
#break just breaks the loop