# cook your dish here
# Function to calculate the maximum number of special attacks Chefario can perform
def max_special_attacks(x, y):
    return min(y // x, y)

# Input the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Input cost of one special attack and initial mana points
    x, y = map(int, input().split())
    
    # Calculate and print the maximum number of special attacks
    print(max_special_attacks(x, y))