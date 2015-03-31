# Define a procedure histogram() that takes a list of integers and prints 
# a histogram to the screen. For example, histogram(4, 9, 7) should 
# print the following:
#
# ****
# *********
# *******


def histogram(inputNums):
    """Print out histogram based on input numbers"""
    for number in inputNums:
        print("*" * int(number))


print("Please enter a number: ")
userNum1 = input()
print("Please enter another number: ")
userNum2 = input()
print("Please enter another number: ")
userNum3 = input()

userNums = [userNum1, userNum2, userNum3]

histogram(userNums)
