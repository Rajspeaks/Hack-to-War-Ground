#include<iostream>
using namespace std; 

int main()
{
	 int a; 
	 
	 cout<<"Please declare the size of array here :- "; 
	 cin>>a; 
	 
	 int *ptr =  new int[a];     // dynamically creating an array []
	 
	 cout<<" --- Entering the data ---"<<endl; 
	 
	 for(int i= 0 ; i<a; i++)
	 {
	 	 cout<<"Data "<<i+1<<": "; cin>>ptr[i]; 
	 	 
	 }
	 cout<<endl;
	 cout<<"-- REVIEW OF DATA --"<<endl;
	 for(int i=0 ; i<a ; i++)
	 {
	 	cout<<" Data |"<<i+1<<"|"<<": "<<*(ptr +i)<<endl;
	 }
	 return 0; 
} 
