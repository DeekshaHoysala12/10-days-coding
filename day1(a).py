n=input("Enter the Number: ")
m=input("Enter the Digit: ")
count=0

for i in n:
    if i!='\0':
        if i==m:
            count=count+1
print("Digit Frequency of the given Digit is ",count,".")
