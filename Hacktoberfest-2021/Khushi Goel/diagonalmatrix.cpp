//Special Matrix
//Print the diagonal matrix without using 2-d Array

#include <iostream>
using namespace std;

//Driver Code
int main()
{   int n;
  
 
   int c[100][100];
   cout<<"Enter the size of the matrix"<<endl;
   cin>>n;
   int b[n];
 
 //tell user to enter the matrix
   cout<<"Enter the matrix";
   for(int i=0;i<n;i++){
       cin>>b[i];
   }
   //Print the diagonal matrix
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i==j){
               cout<<b[i]<<" ";
           }
           else{
               cout<<"0"<<" ";
           }
       }cout<<endl;
   }

    return 0;
}

//Output will depend on the matrix entered by the user.
//example-
//Input-3 4 5 2 3 4 6 8 9 
//Outuput will be-  3 0 0
               //   0 3 0
               //   0 0 9  
  
