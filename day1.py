num=int(input("Enter the Number: "))
digit=int(input("Enter the Digit: "))

count = 0

n = num

while n != 0:

    rem = n % 10

    if rem == digit:

        count+=1

    n = n // 10
print("Digit Frequency of the given Digit is ",count,".")
