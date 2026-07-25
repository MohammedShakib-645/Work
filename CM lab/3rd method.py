import numpy as np
A=np.asmatrix("-9 4 4;-8 3 4;-16 8 7")
if A.shape[0]==A.shape[1]:
    print("yes square matrix")
    ev=np.linalg.eigvals(A)
    print("the eigen values of the matrix A are",ev)
else:
    print("Not a square matrix")
