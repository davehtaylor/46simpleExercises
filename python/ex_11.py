# Define a function generate_n_chars() that takes an integer n and a
# character c and returns a string, n characters long, consisting only 
# of c:s. For example, generate_n_chars(5,"x") should return the 
# string "xxxxx".


def generateNchars(inputChar, inputNum):
    """Print a character a specified number of times."""
    return inputChar * int(inputNum)


print("Please enter a character:")
userChar = input()
print("Please enter a number:")
userNum = input()

print(generateNchars(userChar, userNum))
