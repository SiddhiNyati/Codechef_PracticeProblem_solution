T = int(input())
for i in range(0,T):
    X = int(input())
    if X<3:
        print("LIGHT")
    elif 3<=X<7:
        print("MODERATE")
    elif X>=7:
        print("HEAVY")