//overloading binary operator + using friend function
#include<iostream>
using namespace std;

class complex 
{
	 private : 
	    int  real, img ;
	
	public : 
	   void showdata()
	   {
	   	cout<<real<<" + "<<img<<"i"<<endl;
	   }
	   void getdata()
	   {
	   	cout<<" Enter real :- "<<endl; 
	   	cin>>real; 
	   	cout<<" Enter the img "<<endl ;
	   	cin>>img;
	   }
	   friend complex operator + (complex,complex);
};
 complex operator + (const complex c5, const complex c6 )        // here -> '&' will not be used in case of friend function
	   {
	   	complex temp;
	   	temp.real = c5.real + c6.real ; 
	   	temp.img = c5.img  + c6.img; 
	   	return temp; 
	   }
int main()
{
	complex  c1, c2; 
	c1.getdata();
	c2.getdata();
	complex c3; 
	c3 = c1 + c2;  //c3 = operator+(c1,c2); 
	c3.showdata(); 
	 
}

// OUTPUT 
//  Enter real :- 
// 10
//  Enter the img 
// 2
//  Enter real :- 
// 12
//  Enter the img 
// 50
// 22 + 7i

// Program by - TauqeerAhmad5201
