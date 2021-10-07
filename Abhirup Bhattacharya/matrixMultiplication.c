#include <stdio.h>

void main()
{
  int arr1[100][100],brr1[100][100],crr1[100][100];
  int i,j,k,rOf1,cOf1,rOf2,cOf2;
  int sum=0;
  
  printf("\nInput the rows and columns of first matrix : ");
  scanf("%d %d",&rOf1,&cOf1);
  printf("\nInput the rows and columns of second matrix : ");
  scanf("%d %d",&rOf2,&cOf2);
  
  if(cOf1!=rOf2)
  {
      printf("Mutiplication of Matrix is not possible.");
      printf("\nColumn of first matrix and row of second matrix must be same.");
  }
  else
      {
       printf("Input elements in the first matrix :\n");
       for(i=0;i<rOf1;i++)
        {
            for(j=0;j<cOf1;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }   
        
       printf("Input elements in the second matrix :\n");
       for(i=0;i<rOf2;i++)
        {
            for(j=0;j<cOf2;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&brr1[i][j]);
            }
        }    
        
//print first matrix        
 	 printf("\nThe First matrix is :\n");
  		for(i=0;i<rOf1;i++)
    		{
      		printf("\n");
      		for(j=0;j<cOf1;j++)
          	printf("%d\t",arr1[i][j]);
    		}
    		
//print second matrix 
  	printf("\nThe Second matrix is :\n");
  		for(i=0;i<rOf2;i++)
    		{
      		printf("\n");
      		for(j=0;j<cOf2;j++)
      		printf("%d\t",brr1[i][j]);
    		}
    		
//multiplication of matrix
      for(i=0;i<rOf1;i++)
          for(j=0;j<cOf2;j++)
           crr1[i][j]=0;
             for(i=0;i<rOf1;i++)    //row of first matrix
                 { 
                   for(j=0;j<cOf2;j++)    //column of second matrix
                     {  
                       sum=0;
                         for(k=0;k<cOf1;k++)
                           sum=sum+arr1[i][k]*brr1[k][j];
                           crr1[i][j]=sum;
                     }
                 }

//print multiplied matrix
  printf("\nAfter multiplication: \n");
  for(i=0;i<rOf1;i++)
     {
        printf("\n");
        for(j=0;j<cOf2;j++)
         {
           printf("%d\t",crr1[i][j]);
         }
     }
  }
printf("\n\n");
}
