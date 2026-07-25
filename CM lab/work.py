import numpy as np
import matplotlib.pyplot as plt
t=input("Enter the Elements of the matrix: ")
A=np.asmatrix(t)
if A.shape[0]==A.shape[1]:
    print("yes A is asquare matrix")
else:
    print(" A is not a sqaure matrix:")
ev1,ev2=np.linalg.eig(A)
print("The eigen values of A are",ev1.real)
print("the eigen vectors of A are",ev2.real)
print("the eigen vectors of A are",A.shape)
plt.figure()
plt.axhline()
plt.axvline()
plt.xlim(-3,3)
plt.ylim(-3,3)
plt.gca().set_aspect("equal")
plt.quiver(0,0,ev2[0,0].real,ev2[1,0].real,angles="xy",scale_units="xy",scale=1)
plt.title("Eigen vectors of the matrix A")
plt.quiver(0,0,ev2[0,1].real,ev2[1,1].real,angles="xy",scale_units="xy",scale=1)
plt.xlabel("x-axis")
plt.ylabel("y-axis")
plt.show()