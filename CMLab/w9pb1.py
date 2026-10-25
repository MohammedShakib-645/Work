import math as mt
def f(x):
    return x**3-4*x-9    ##x*mt.log(x,10)-1.2       ##3*x-mt.exp(x)             
a=float(input("Enter the lower limit of the interval="))
b=float(input("Enter the upper limit of the interval="))
while f(a)*f(b)>=0:
    print("Bisection method fails choose another interval")
    a=float(input("Enter the lower limit of the interval="))
    b=float(input("Enter the upper limit of the interval="))
t=float(input("Enter the tolarence value="))
while (b-a)/2>t:
    c=(a+b)/2
    if f(c)==0:
        break
    elif f(a)*f(c)<0:
        b=c
        print(f"The root lies between {a:.4f} and {b:.4f}")
    else:
        a=c
        print(f"The root lies between {a:.4f} and {b:.4f}")
print(f"The approximate root is c={c:.4f}")