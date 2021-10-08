#include<iostream>
using namespace std;
 
int main()
{
	 
	 cout<<"Enter the data"<<endl; 
	 int data;
	 cin>>data; 
	 
	int *p = new int(data) ;   // return used data_type's addresss so we have to hold it it pointer 
   
//	 *p = data;                 // here we're just creating p pointer variable holding value of data variable
    cout<<"---OUTPUT---"<<endl; 
	 cout<<*p; 
	 cout<<endl;
	 cout<<p;
	 delete p ; 
	 
}

//  OUTPUT 
 
//  Enter the data 
//  50
//  50
// <random address>

// Program by - TauqeerAhmad5201