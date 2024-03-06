T = int(input())
for i in range(0,T):
    X,H = map(int,input().split())
    if X>=H:
        print("Yes")
    else:
        print("No")