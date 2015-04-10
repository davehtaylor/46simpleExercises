# Define a function is_palindrome() that recognizes palindromes (i.e. words
# that look the same written backwards). For example, is_palindrome("radar")
# should return True.

def reverseString(inputString):
    """Take a string and return the reverse."""
    return inputString[::-1]


def isPalindrome(inputString):
    """Test if input is a palindrome."""
    if userString == reverseString(userString):
        print("It's a palindrome.")
    else:
        print("That's not a palindrome")

print("Please enter a word or phrase: ")
userString = input()

isPalindrome(userString)
