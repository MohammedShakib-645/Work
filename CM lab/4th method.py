import numpy as np
T=input("Enter the elements of matrix:")
A=np.asmatrix(T)
if A.shape[0]==A.shape[1]:
    print("yes A is a square Matrix")
    ev=np.linalg.eigvals(A)
    print("the eigen values of A are",ev)
else:
    print("it is not A Square <atrix")
    
