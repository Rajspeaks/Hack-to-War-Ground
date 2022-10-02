#include <stdio.h>

int fact(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return n*fact(n-1);
}

int main()
{
    int num;
    printf("ENTER A NUMBER TO GET IT'S FACTORIAL\n");
    scanf("%d",&num);
    printf("%d",fact(num));

    return 0;
}

/*
ANKIT SAURABH
output:
ENTER A NUMBER TO GET IT'S FACTORIAL
5

120
*/
