n=int(input("Enter numbers:"))
for i in range(1,n):
    for j in range(1,i+1,2):
        print("*")
        print(i,end="")
