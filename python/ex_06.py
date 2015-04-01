# Define a function sum() and a function multiply() that sums and multiplies
# (respectively) all the numbers in a list of numbers. For example, 
# sum([1, 2, 3, 4]) should return 10, and multiply([1, 2, 3, 4]) should 
# return 24.
#
# NOTE:
# Even though the instructions here call for functions called sum and
# multiply, I will not be writing them as such. Since these overlap 
# with built-in functions. 


def sum_numbers(inputNums):
    """Add input numbers"""
    total = 0
    for number in inputNums:
        total += int(number)
    return total


def multiply_numbers(inputNums):
    """Multiply input numbers"""
    total = 1
    for number in inputNums:
        total *= int(number)
    return total


print("Would you like to add or multiply?")
print("1. Add")
print("2. Multiply")
print("Your selection: ")
userChoice = input()

print("Please enter a number: ")
userNum1 = input()
print("Please enter another number: ")
userNum2 = input()
print("Please enter another number: ")
userNum3 = input()

userNums = [userNum1, userNum2, userNum3]

if userChoice == 1:
    print("The sum is " + str(sum_numbers(userNums)))
else:
    print("The product is " + str(multiply_numbers(userNums)))
