/*Ques14. Write a program to accept an input n from the user and graphically represent the values of 
T(n) where n varies from 0 to n for the recurrence relations. For e.g. T(n) = T(n-1) + n, 
T(0) = 1, T(n) = T(n-1) + n^2, T(0) =1, T(n) = 2*T(n/2) + n, T(1)=1.*/

#include<iostream>
#include<cmath>
using namespace std;
//function for 1st reccurrence relation.
int T1(int n)//n is given by user.
{
    if(n==0)//base condition.
        return 1;
       
   int temp=T1(n-1);    
   return (n+temp);
}
//function for 2nd reccurrence relation.
int T2(int n)
{
    if(n==0)//base condition
        return 1;
        
     int temp=T2(n-1);
	 return(n*n+temp);
	 
}
//function for 3rd reccurrence relation.
int T3(int n)
{
    if(n==1)//base condition
        return 1;
    
	int temp=2*T3(n/2);
    return (n+temp);
    
}

int main()
{
    int n,ch;char c;
    do{
	
    cout<<"\nENTER THE VALUE OF n :";
    cin>>n;
	cout<<"VALUES OF RECURRENCE RELATIONS :"<<endl<<endl;
	cout<<"\t 1. T(n)= T(n-1)+n       ,T(0)=1 "<<endl;
	cout<<"\t 2. T(n)= T(n-1)+n^2     ,T(0)=1 "<<endl;
	cout<<"\t 3. T(n)= 2*T(n/2)+n     ,T(1)=1 "<<endl;

	cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                for(int i=0;i<=n;i++)//loop for(T(0) to T(n))
                    cout<<"The result for T("<<i<<")is "<<T1(i)<<endl;
                break;
            }
            case 2:
            {
                for(int i=0;i<=n;i++)//loop for(T(0) to T(n))
                    cout<<"The result for T("<<i<<")is "<<T2(i)<<endl;
                break;
            }
            case 3:
            {
                for(int i=1;i<=n;i++)
                    cout<<"The result for T("<<i<<")is "<<T3(i)<<endl;
                 break;
            }
            default:
            {
                cout<<"Wrong choice"<<endl;
                break;
            }
        }
        cout<<"Do you want to continue (Y/N)"<<endl;
        cin>>c;
    }
    
    while(c=='Y'||c=='y');
}

/* OUTPUT:

ENTER THE VALUE OF n :5
VALUES OF RECURRENCE RELATIONS :

         1. T(n)= T(n-1)+n       ,T(0)=1
         2. T(n)= T(n-1)+n^2     ,T(0)=1
         3. T(n)= 2*T(n/2)+n     ,T(1)=1
Enter your choice
1
The result for T(0)is 1
The result for T(1)is 2
The result for T(2)is 4
The result for T(3)is 7
The result for T(4)is 11
The result for T(5)is 16
Do you want to continue (Y/N)
y

ENTER THE VALUE OF n :5
VALUES OF RECURRENCE RELATIONS :

         1. T(n)= T(n-1)+n       ,T(0)=1
         2. T(n)= T(n-1)+n^2     ,T(0)=1
         3. T(n)= 2*T(n/2)+n     ,T(1)=1
Enter your choice
2
The result for T(0)is 1
The result for T(1)is 2
The result for T(2)is 6
The result for T(3)is 15
The result for T(4)is 31
The result for T(5)is 56
Do you want to continue (Y/N)
y

ENTER THE VALUE OF n :5
VALUES OF RECURRENCE RELATIONS :

         1. T(n)= T(n-1)+n       ,T(0)=1
         2. T(n)= T(n-1)+n^2     ,T(0)=1
         3. T(n)= 2*T(n/2)+n     ,T(1)=1
Enter your choice
3
The result for T(1)is 1
The result for T(2)is 4
The result for T(3)is 5
The result for T(4)is 12
The result for T(5)is 13
Do you want to continue (Y/N)
n
*/
