#include<iostream>
using namespace std;

int main()
{
	   
	
	cout<<" Enter the data for int :- "<<endl;
	 int i_data; 
	 cin>>i_data; 
	 int *int_pointer =  new int(i_data);  // just a method to declare a variable to pointer variable which holds it address
	
	cout<<" Enter the data for float  :- "<<endl;
	 float f_data; 
	 cin>>f_data;  
	 float *float_pointer = new float(f_data) ;	   // just a method to declare a variable to pointer variable which holds it address
     
     cout<<" *int_pointer = "<<*int_pointer;
     cout<<"\n*float_pointer = "<<*float_pointer;
     
     delete int_pointer; 
     delete float_pointer;
    
    cout<<endl;
	cout<<"\n--- DELETED---- "<<endl; 
     cout<<"*int_pointer = "<<*int_pointer;
     cout<<"\n*float_pointer = "<<*float_pointer;
     
  return 0; 
}

// OUTPUT 

// Enter data for int 
// 10 
// Enter data for float
// 20

// *int_pointer = 10 
// *float_pointer = 20

// ---DELETED---

// *int_pointer = random value 
// *float_pointer = 20

// Program by - TauqeerAhmad5201
