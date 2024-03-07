def find_tastier_option(x, y):
    chocolate_tastiness = 2 * x
    candy_tastiness = 5 * y
    
    if chocolate_tastiness > candy_tastiness:
        return "Chocolate"
    elif chocolate_tastiness < candy_tastiness:
        return "Candy"
    else:
        return "Either"
t = int(input())
for _ in range(t):
    x, y = map(int, input().split())
    print(find_tastier_option(x, y))