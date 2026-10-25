import numpy as np
T=input("Enter elements of matrix")
A=np.asmatrix(T)
if A.shape[0]==A.shape[1]:
    print("the matrix is square")
    ev=np.linalg.eigvals(A)
    print("eigen values of A are",ev)
    print("order of matrix",A.shape)
else:
    print("not a square")