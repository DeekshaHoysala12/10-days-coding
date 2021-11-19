n=input("number")
m=input("digit")
count=0

for i in n:
    if i!='\0':
        if i==m:
            count=count+1
print(count)
