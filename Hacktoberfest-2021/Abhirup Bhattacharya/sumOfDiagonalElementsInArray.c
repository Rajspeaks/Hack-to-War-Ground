#include<stdio.h>

int main()
{
    int i,j,row,col;
    int sumRight=0;
    int sumLeft=0;
    int arr[100][100];
    printf("enter the number of rows and columns:");
    scanf("%d %d",&row,&col);   //accept the number of rows and columns from user
    
  //accept the elements for the matrix
    printf("enter the elements of each row separated by space:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
  
  //calculate the sum of the left diagonal and right diagonal elements separately 
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sumLeft+=arr[i][j];
            }
          
            if(i+j==col-1)
            {
                sumRight+=arr[i][j];
            }
        }
    }
  
  //print the corresponding sum
    printf("left diagonal=%d\n",sumLeft);
    printf("right diagonal=%d",sumRight);
    return 0;
}
