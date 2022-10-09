'''strip() is an inbuilt function in Python programming language that returns a copy of the string with both leading and trailing characters removed (based on the string argument passed)'''
'''string.strip([chars])
Parameter: 
There is only one optional parameter in it:
1)chars - a string specifying 
the set of characters to be removed. 

If the optional chars parameter is not given, all leading 
and trailing whitespaces are removed from the string.
Return Value:
Returns a copy of the string with both leading and trailing characters removed.'''

string = "    adeeb is a good boy    "
print(string)
print(string.strip()) #trailing and ending spaces has been removed
data = "geeks for geeks"
print(data.strip(' geeks '))
myname = "tauqeer has to study hard tauqeer"
print(myname.strip('tauqeerhard'))  # so simply it looks at starting and ending of string, and try to remove string passed as well as white space 
myname1 = "tauqeer has to study hard tauqeer"
print(myname1.strip('tauqeerhard '))  # so simply it looks at starting and ending of string, and try to remove string passed as well as white space #having space is important to remove characters ahead of first or last character
myname2 = "tauqeer has to study hard tauqeer"
print(myname2.strip('tauqeer hard'))  # so simply it looks at starting and ending of string, and try to remove string passed as well as white space
myname3 = "tauqeer has to study hard tauqeer"
print(myname3.strip('tauqeer '))  # so simply it looks at starting and ending of string, and try to remove string passed as well as white space

#OUTPUT 
#     adeeb is a good boy    
# adeeb is a good boy
# for
#  has to study hard
# s to study
# s to study
# has to study hard

# Program by - TauqeerAhmad5201
