## {week 1, method-5}
##[______{5th method} for finding real and complex eigen values______]
## ****** TAKING INPUT FROM CONSOLE*****
import numpy as np
T=input("Enter the elements of matrix:")
A=np.asmatrix(T)
if A.shape[0]==A.shape[1]:
    print("yes A is a square Matrix")
    ev=np.linalg.eigvals(A)
    print("the eigen values of A are",ev)
    print("The order of the matrix is:",A.shape)
else:
    print("it is not A Square <atrix")
    print("The order of the matrix is:",A.shape)
