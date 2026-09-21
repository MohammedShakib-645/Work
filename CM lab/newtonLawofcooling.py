import math as mt
N=float(input("Enter the initial teperature of the body="))
T=float(input("Enter the surrounding medium temperature="))
NO=float(input("Enter the Next temperature of the body="))
tO=float(input("Enter the next Time="))
c=N-T
k=mt.log((NO-T)/c)/-tO
print(f"The cooling constant k={k:.4f}")                                                                                                                                                                                                                                                                                                                                                        
print("Enter 1 to calculate temperature of the body if time is given=")
print("Enter 2 to calculate time if temperature of the body is given=")
choice=int(input("Enter 1(or) 2="))
if choice==1:
    t1=float(input("Enter the time to calculate temperature="))
    N1=T+c*mt.exp(-k*t1)
    print(f"The temperature of the body is N1={N1:.4f}")
elif choice==2:
    N1=float(input("Enter the temperature of the body="))
    t1=mt.log((N1-T)/c)/-k
    print(f"The time is T1={t1:.4f}")
else:
    print("Wrong choice");        
