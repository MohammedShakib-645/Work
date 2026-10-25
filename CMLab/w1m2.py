## {week 1, method-2}
##[______{2nd method} for finding real and complex eigen values______]
import numpy as np
A=np.array([[1,3],[4,5]])
if A.shape[0]==A.shape[1]:
    print("the given matrix is square")
    ev=np.linalg.eigvals(A)
    print("the eigen vaues of A are",ev)
    print("The order of the matrix is:",A.shape)
else:
    print("sorry not a square matrix")
    print("The order of the matrix is:",A.shape)
