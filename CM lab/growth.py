import math as mt
N=float(input("Enter the initial amount of substance="))
N0=float(input("Enter the next amount of the substance="))
t0=float(input("Enter the next time="))
c=N
print("c=",c)
k=mt.log(N0/N)/-t0
print(f"the growth constant k={k:.6f}")
print("Enter 1 to calculate amount of substance if time is given=")
print("Enter 2 to calculate time if the amount of substance is given=")
choice=int(input("Enter 1 (or) 2"))
if choice==1:
    t1=float(input("Enter the time to calculate amount of substance="))
    N1=N*mt.exp(-k*t1)
    print(f"The amount of substance N1={N1:.3f}")
elif choice==2:
    N1=float(input("Enter the amount of substance to calculate time="))
    t1=mt.log(N1/N)/-k
    print(f"The time t1={t1:.2f}")
else:
    print("Wrong choice")
    
    

