
def divide(divisor,dividend):
    quotient = 0
    while dividend >= divisor:
        quotient += 1
        dividend = dividend - divisor
    else:
        remainder = dividend
    
    return quotient,remainder

if __name__ == "__main__":
    D1 = int(input("Enter the dividend: "))
    D2 = int(input("Enter the divisor: "))

    q,r = divide(D2,D1)

    print("The quotient and remainder respectively are: " + str(q) + " and " + str(r))