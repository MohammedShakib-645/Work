#higher order ordinary non-homogeneous differential equation
import sympy as sp
x=sp.symbols('x')
y=sp.Function('y')
LHS=sp.sympify(input("Enter the LHS of ODE:"))
RHS=sp.sympify(input("Enter the RHS of ODE:"))
ODE=sp.Eq(LHS,RHS)
GS=sp.dsolve(ODE,y(x))
print("The General Solution is")
sp.pprint(GS)
