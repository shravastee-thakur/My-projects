num1 = float(input("Enter 1st number: "))
op = input("Enter operator: ")
num2 = float(input("Enter 2nd number: "))

if op == "+":
    add = num1 + num2
    print("The sum of", num1, "and", num2, "is:", add)
elif op == "-":
    diff = num1 - num2
    print("The difference between", num1, "and", num2, "is:", diff)
elif op == "*":
    product = num1 * num2
    print("The product of", num1, "and", num2, "is:", product)
elif op == "/":
    if num2 == 0:
        print("Can not divide by zero")
    else:
        quotient = num1 / num2
        print("The quotient of", num1, "and", num2, "is:", quotient)
elif op == "%":
    remainder = num1 % num2
    print("The remainder of", num1, "and", num2, "is:", remainder)

else:
    print("Invalid operator")
