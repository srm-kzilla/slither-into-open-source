# Factorial of a number using recursion


def recur_factorial(n):
    if n == 1 or n == 0:
        return 1
    else:
        return n * recur_factorial(n - 1)


num = int(input("Enter the number:"))
if num<0:
    print("Invalid Number")

else:
    if num >= 999:
        print("Maximum recursion depth exceeded in comparison")
    else:
        print("The factorial of", num, "is", recur_factorial(num))
# TODO:Take input number from user
# TODO:check if the number is negative
# TODO:check for the boundary codition of factorial

