# AT 6th function notes
import random 
# 1 what is a function
    # a set of intrsuctions that is exucuted when you call on a keyowrd
#2 why do we use functions
    # so you dont have to continuesly code something making it repative
# 3 how to write a function in python
    # use the keyword def and put in a name
# 4 what parameters and agruments are
    # Parameters are given when we define the function, arguments are given when we call the function
# 5 how to use parameters and agruments in python
    # code that you prebulid to get a specific reaction but changed so you get a different reaction
# 6 what return statments are
    # it takes what happend inside your function and putting it back where you put the function
# 7 how to use return statements in a program
    # 
# white space is used to tell the computer where things are, the codes indent with word placement must exactly match
# varibales are used for when we have the same action but want different reactions

def welcome():
    name = input ("what is your name")
    print(f"hello {name}!")

print(f"the function is over")

welcome()
welcome()
welcome()
welcome()
welcome()
welcome()
welcome()


def add(number): #Parameters given when we define the function
    print(number)
num_one = 12
num_two = 24
add(num_one) #Agruments are given when we call the function

def clean(info):
    return info.strip().lower()

name = input("what is your name")
quest = input("what is your quest")
color = input("what is your favorite color")

print(f"hello, {clean(name)}. I have been trying to {clean(quest)}, that is super cool! Are you sure {clean(color)} is your favorite?")
