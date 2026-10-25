# Higher Order Homogenious Differential Equation...... 
import sympy as sp

x=sp.symbols('x')
y=sp.Function('y')
LHS=sp.sympify(input("Enter the value of LHS="))
RHS=sp.sympify(input("Enter the value of RHS="))
ODE=sp.Eq(LHS,RHS)
GS=sp.dsolve(ODE,y(x))
print("The General solution of Given ODE is ")
sp.pprint(GS)
order=sp.ode_order(ODE,y)
print("The order of the given ODE is =",order)