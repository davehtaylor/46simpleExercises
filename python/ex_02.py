# Define a function max() that takes two numbers as arguments and returns
# the largest of them.


def maxNum(inputNum1, inputNum2):
    """Find the largest of two input numbers"""
    if inputNum1 > inputNum2:
        return inputNum1
    else:
        return inputNum2


def maxOfThree(inputNum1, inputNum2, inputNum3):
    """Find the largest of three input numbers"""
    firstMax = maxNum(inputNum1, inputNum2)
    return maxNum(firstMax, inputNum3)


print("Please enter a number:")
userNum1 = input()
print("Please enter a second number:")
userNum2 = input()
print("Please enter a third number:")
userNum3 = input()
print("The largest of the three is " \
      + maxOfThree(userNum1, userNum2, userNum3))
