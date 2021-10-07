//C program to check palindrome of an entered string
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int i,n;
    printf("Enter the string 1:\n");
    gets(str1);

    n=strlen(str1);
    for(i=0;i<n;i++)
    str2[n-i-1]=str1[i];
    str2[i]='\0';

    if(strcmp(str1,str2)==0)
        printf("The given string is a palindrome\n");
    else
        printf("The given message is not a palindrome\n");
    return 0;
}

/*Output
(Case 1)
Enter the string 1:
MADAM
The given string is a palindrome

(Case 2)
Enter the string 1:
HELLO
The given message is not a palindrome*/
