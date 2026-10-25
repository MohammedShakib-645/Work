## {week-3, *problem-[ 1 ]*}
## To Find the general solution of exact differential Equation

import sympy as sp 
x,y,c=sp.symbols('x y c')    # to make x,y,c as variables
M=sp.sympify(input("Enter the value of M(x,y)="))    #To assign Algebraic Expression
N=sp.sympify(input("Enter the value of N(x,y)="))

dM_dy=sp.diff(M,y)      #Calculating the differenciation of M w.r.t "y".
print("dM_dy=")
sp.pprint(dM_dy)        ## pprint to make it look *pretty*: i.e, pretty.print

dN_dx=sp.diff(N,x)      #Calculating the differenciation of N w.r.t "x".
print("dN_dx=")
sp.pprint(dN_dx)

if dM_dy==dN_dx:        #Checking the condition for exactness of an equation
    print("The givrn Differential Equation is Exact")
    F=sp.integrate(M,x)
    G=sp.integrate(N-sp.diff(F,y),y)
    print("The General Solution of Given Differential Equation is:")
    sp.pprint(sp.Eq(F+G,c))     #To write the F and G terms as a equation.
else:
    print("The Given Differential Equation is Non Exact")