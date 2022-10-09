# Python program to check if the input number is odd or even.
# A number is even if division by 2 gives a remainder of 0.
# If the remainder is 1, it is an odd number.

num = int(input("Enter a number: "))
if (num % 2) == 0:
   print("{0} is Even".format(num))
else:
   print("{0} is Odd".format(num))
    
#output:

# Enter a number: 43
# 43 is Odd

# Enter a number: 18
# 18 is Even

# Program by Rajeep Das: @Rajspeaks
