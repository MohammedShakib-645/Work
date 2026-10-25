## {week 1 ,method-1}
##[______{1st method} for finding real and complex eigen values______]
import numpy as np
A=np.array([[1,4,3],[2,3,1],[1,2,3]])
if A.shape[0]==A.shape[1]:
    print("the given matrix is square")
    ev=np.linalg.eigvals(A)
    print("the eigen values of A are",ev)
    print("The order of the matrix is:",A.shape)
else:
    print("sorry not a square matrix")
    print("The order of the matrix is:",A.shape)