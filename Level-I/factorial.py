# Factorial of a number using recursion


def recur_factorial(n):
    if n == 1:
        return n
    else:
        return n * recur_factorial(n - 1)


num = 7

# TODO:Take input number from user
# TODO:check if the number is negative
# TODO:check for the boundary codition of factorial


print("The factorial of", num, "is", recur_factorial(num))
