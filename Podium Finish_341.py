# cook your dish here
# Function to calculate the time gap between Chef and the winner
def calculate_time_gap(A, B):
    return A + B

# Input the number of test cases
T = int(input())

# Iterate through each test case
for _ in range(T):
    # Input time gaps for Chef and runner up, and runner up and winner
    A, B = map(int, input().split())
    
    # Calculate and print the time gap between Chef and the winner
    result = calculate_time_gap(A, B)
    print(result)