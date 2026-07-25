import numpy as np
A=np.array([[1,3],[4,5]])
if A.shape[0]==A.shape[1]:
    print("the given matrix is square")
    ev=np.linalg.eigvals(A)
    print("the eignen vaues of A are",ev)
else:
    print("sorry not a square matrix")


##next question
import numpy as np
A=np.array([[1,3],[4,5],[5,6]])
if A.shape[0]==A.shape[1]:
    print("the given matrix is square")
    ev=np.linalg.eigvals(A)
    print("the eignen vaues of A are",ev)
else:
    print("sorry not a square matrix")
