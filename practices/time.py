# AT what time is it practice

time=int(input("what time is it in military time?:\n"))

if time < 11:
    print(f" its {time} good morning")
elif time > 11:
    print(f" its {time} goodafternooon")
elif time > 4:
    print(f" its {time} good evening")