def fibonacci(n):
    if n <= 2:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

def GCD(m,n):
    if m == n:
        return m
    elif m > n:
        return GCD(m-n,n)
    elif n > m:
        return GCD(m,n-m)
    
if __name__ == "__main__" :
    m = int(input("m: "))
    n = int(input("n: "))
    Fm = fibonacci(m)
    print("Fm = " + str(Fm))
    Fn = fibonacci(n)
    print("Fn = " + str(Fn))
    gcd_mn = GCD(m,n)
    print("GCD(m,n) = " + str(gcd_mn))
    gcd_Fmn = GCD(Fm,Fn)
    print("GCD(Fm,Fn) = " + str(gcd_Fmn))
    num = fibonacci(gcd_mn)
    print("F(GCD(m,n)) = " + str(num))

