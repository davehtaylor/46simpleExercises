# Define a function reverse() that computes the reversal of a string.
# For example, reverse("I am testing") should return the string
# "gnitset ma I".

def reverseString(inputString):
    """Take a string and return the reverse."""
    return inputString[::-1]

print("Please enter a word or phrase: ")
userString = input()

print(reverseString(userString))
