# Define a function max() that takes two numbers as arguments and returns
# the largest of them.


def max(inputNum1, inputNum2):
    if inputNum1 > inputNum2:
        return inputNum1
    else:
        return inputNum2

print("Please enter a number:")
userNum1 = input()
print("Please enter a second number:")
userNum2 = input()
print("The largest of the two is " + max(userNum1, userNum2))
