n=int(input("Enter n "))
size=2*n-1
a=[[0 for i in range(size)]for j in range(size)]
for i in range(n):    
    for j in range(i,size-i):
        a[i][j]=n
        
        a[size-i-1][j]=n
        
        a[j][i]=n
        
        a[j][size-i-1]=n
    
    n-=1
    
for i in range(size):
    for j in range(size):
        print(a[i][j],end=" ")
    print()
