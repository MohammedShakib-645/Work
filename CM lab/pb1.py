import numpy as np
A=np.array([[1,4,3],[2,3,1],[1,2,3]])
if A.shape[0]==A.shape[1]:
    print("the given atrix is square")
    ev=np.linalg.eigvals(A)
    print("the eigen values of A are",ev)
else:
    print("sorry not a square matrix")
