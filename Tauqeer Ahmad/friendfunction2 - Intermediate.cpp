// using FRIEND FUNCTION intermediate
#include<iostream>
using namespace std; 

class  student
{ 
  private : 
    long e_roll;
    long key; 

  public : 
     int maths, physics;  
	
    void getdata()                        //  get data function created to develop friendship
    {
    	cout<<"Please enter the e_roll : "<<endl; 
    	cin>>e_roll; 
    	
    	cout<<"Please enter the key : "<<endl;
    	cin>>key; 
		
		cout<<" Enter the maths marks :- "<<endl; 
		cin>>maths; 
		
		cout<<" Enter the physics marks :- "<<endl; 
		cin>>physics;   	
	}
	friend void showdata(student );      // established friendship using friend keyword between class and function
}; 
void showdata(student os1)         //telling functions that receive object of class student 
{ 
     cout<<" Enrollment Number : "<<os1.e_roll;   //accessing private member 
     cout<<endl; 
     cout<<" Key : "<<os1.key;                    //accessing private member 
     
     cout<<" Maths : "<<os1.maths;
	 cout<<" Physics : "<<os1.physics<<endl;
}
int main()
{
	 student s1 ; 
	 s1.getdata();
	 showdata(s1);  
}

// OUTPUT 

// Please enter the e_roll : 
// 45
// Please enter the key : 
// 546
//  Enter the maths marks :- 
// 56
//  Enter the physics marks :- 
// 67
//  Enrollment Number : 45
//  Key : 546 Maths : 56 Physics : 67

// Program by - TauqeerAhmad5201