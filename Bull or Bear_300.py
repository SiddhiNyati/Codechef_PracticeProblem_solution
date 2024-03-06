# cook your dish here
# Function to determine the result of Chef's stock deal
def stock_deal_result(cost_price, selling_price):
    if cost_price > selling_price:
        return "LOSS"
    elif cost_price < selling_price:
        return "PROFIT"
    else:
        return "NEUTRAL"

# Input the number of test cases
T = int(input())

# Iterate through each test case
for _ in range(T):
    # Input the cost price and selling price
    X, Y = map(int, input().split())

    # Output the result for the current test case
    result = stock_deal_result(X, Y)
    print(result)