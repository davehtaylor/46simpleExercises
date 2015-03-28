# Write a function that takes a character and returns True if it 
# is a vowel, False otherwise


def isVowel(inputChar):
    """Checks if input character is a vowel"""
    if inputChar == 'a' or \
            inputChar == 'e' or \
            inputChar == 'i' or \
            inputChar == 'o' or \
            inputChar == 'u':
        return True
    else:
        return False


print("Please enter a letter to discover if it is a vowel: ")
userChar = input()
if isVowel(userChar) == True:
    print("That's a vowel")
else:
    print("No, that's not a vowel")
