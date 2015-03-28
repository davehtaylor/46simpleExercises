# Define a function that computes the length of a given list or string. 

def stringLength(inputString):
    """Calculate the length of a string without using len()"""
    length = 0
    for char in inputString:
        length += 1
    return length

print("Enter a string: ")
userString = input()
print("The string is " + str(stringLength(userString)) + " characters long")
