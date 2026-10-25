import math as mt 
N=float(input("Enter the initial temperature of the body:"))
T=float(input("Enter the temperature of the surrounding medium:"))
N0=float(input("Enter the next temperature of the body:"))
t0=float(input("Enter the next time"))
c=N-T
k=mt.log((N0-T)/c)/-t0
print(f"The cooling constant k={k:4f}:")
print("Enter 1 to calculate temperature of the body if time is given:")
print("Enter 2 to calculate temperature is given:")
choice=int(input("Enter 1 (or) 2"))
if choice==1:
    t1=float(input("Enter the time to calculate the temperature: "))
    N1=T+c*mt.exp(-k*t1)
    print(f"The Temperature of the body is N1={N1:4f}:")
elif choice==2:
    N1=float(input("Enter the temperature of the body:"))
    t1=mt.log((N1-T)/c)/-k
    print(f"The time is t1={t1:4f}:")
else:
    print("Wrong Choice")