## {week 1, method-4}
##[______{4rth method} for finding real and complex eigen values______]
import numpy as np
A=np.asmatrix("-9 4 4;-8 3 4;-16 8 7")
if A.shape[0]==A.shape[1]:
    print("yes square matrix")
    ev=np.linalg.eigvals(A)
    print("the eigen values of the matrix A are",ev)
    print("The order of the matrix is:",A.shape)
else:
    print("Not a square matrix")
    print("The order of the matrix is:",A.shape)
