## {week 1,method-3}
##[______{3rd method} for finding real and complex eigen values______]
##*****PRACTICE  PROBLEM*****
import numpy as np
B=np.asmatrix("1 -2;1 3")
if B.shape[0]==B.shape[1]:
    print("the given matrix is square")
    ev=np.linalg.eigvals(B)
    print("the eignen vaues of B are",ev)
    print("The order of the matrix is:",B.shape)
else:
    print("sorry not a square matrix")
    print("The order of the matrix is:",B.shape)
