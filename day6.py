def isVowel(ch):
    return (ch == 'a' or ch == 'e' or
            ch == 'i' or ch == 'o' or
            ch == 'u')
str=input("Enter a string less than 20 characters ")
strn=str.split()
result1 = 0
result2 =0
count = 0
sum=0
for i in strn:
    
    for j in i:
 
        if (isVowel(j)):
            count += 1
    if (count % 2 == 1):
        result1 += 1
                
    else:
        result2 += 1
sum=result1+result2
print(sum)
