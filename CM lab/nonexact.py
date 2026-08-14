import sympy as sp
x,y,c=sp.symbols('x y c')
M=sp.sympify(input("Enter the value of M(x,y)="))
N=sp.sympify(input("Enter the value of N(x,y)="))
dM_dy=sp.diff(M,y)
print("dM_dy=")
sp.pprint(dM_dy)
dN_dx=sp.diff(N,x)
print("dN_dx=")
sp.pprint(dN_dx)
if dM_dy!=dN_dx:
    print("The given differential equation is Non-exact.")
    f=sp.simplify((dM_dy-dN_dx)/N)
    g=sp.simplify((dN_dx-dM_dy)/M)
    IF=None
    if not f.has(y):
        IF=sp.exp(sp.integrate(f,x))
        print("The integrating factor=")
        sp.pprint(IF)
    elif not g.has(x):
        IF=sp.exp(sp.integrate(g,y))
        print("The Integrating factor=")
        sp.pprint(IF)
    else:
        print("The 3 and 4 integrating factors are not applicable.")
    if IF is not None:
        M1=sp.simplify(IF*M)
        N1=sp.simplify(IF*N)
        F=sp.integrate(M1,x)
        G=sp.integrate(N1-sp.diff(F,y),y)
        print("The General solution of given differential equation is.")
        sp.pprint(sp.Eq(F+G,c))
else:
    print("The given differential equation is exact.")
    