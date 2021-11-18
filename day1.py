num=int(input("enter a number"))
digit=int(input("enter a number for frequency finding "))

count = 0

n = num

while n != 0:

    rem = n % 10

    if rem == digit:

        count+=1

    n = n // 10
print(digit,"occured",count,"number of times")
