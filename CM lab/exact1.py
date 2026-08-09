import sympy as sp
x,y,c=sp.symbols("x y c")
M=sp.sympify(input("Enter the value of M(x,y)="))
N=sp.sympify(input("Enter the value of N(N,x)="))
dM_dy=sp.diff(M,y)
print("dM_dy=")
sp.pprint(dM_dy)
dN_dx=sp.diff(N,x)
print("dN_dx")
sp.pprint(dN_dx)
if dM_dy==dN_dx:
    print("The given differential equation is exact")
    F=sp.integrate(M,x)
    G=sp.integrate(N-sp.diff(F,y),y)
    print("The general solution of differantial equation is exact")
    sp.pprint(sp.Eq(F+G,c))
else:
    print("The given Differential equation is Non Exact")
    
