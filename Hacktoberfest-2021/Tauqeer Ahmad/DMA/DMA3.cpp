#include<iostream>

using namespace std; 
int main()
{
	 int record; 
	  cout<<" please enter the number of records :- "<<endl;
	   cin>>record; 
	  
	  float *ptr = new float[record];         // memory allocating  for Array
	  
	  cout<<" Enter the marks of students :- "<<endl; 
	  for (int i= 0 ; i<record ; i++)
	  {
	  	 cout<<" Student "<<i+1<<":"; 
	  	 cin>>ptr[i];                  // *(ptr + 1)
	   } 
	   
	   cout<<" Data Entered :- "<<endl;
	   for (int i = 0 ; i<record; i++)
	   {
	   	 cout<<"Student  "<<i+1<<":"<<ptr[i]<<endl;      // *(ptr + 1)
	   }
	   
	   delete []ptr; 
	   
	   return 0;
}

// OUTPUT 

// please enter the number of records :-
// 2
//  Enter the marks of students :- 
//  Student 1:12
//  Student 2:13
//  Data Entered :- 
// Student  1:12
// Student  2:13

// Program by - TauqeerAhmad5201
