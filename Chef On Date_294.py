T = int(input())
for i in range(0,T):
    X,Y = map(int,input().split())
    if X>=Y:
        print("Yes")
    else:
        print("No")