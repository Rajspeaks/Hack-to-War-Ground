#include<iostream>
using namespace std;

class cars 
{
	 private : 
	   int cost; 
	
	public :
 		 
 		 void getdata()
 		 { 
 		   cout<<"Enter the cost :- "<<endl;
 		   cin>>cost; 
		  }
		void showdata()
		{
			 cout<<" COST after 1Rs deduction  : "<<cost<<endl;
		}
		friend cars operator - (cars ); 
};
//cars operator - ( cars  &obj)           //here again & will not be used in case of friend function
//{                                      // here 'const' will not be used because it will set the program in read only 
//	 cars temp;
//	 temp.cost = --obj.cost;                 // <!-- ERROR -->
//	 return temp; 
//}

cars operator - ( cars  obj)            // SOLUTION 
{                                       
	 cars temp;
	 temp.cost = --obj.cost; 
	 return temp; 
}
int main()
{
	 cars c1,c2; 
	  c1.getdata();
	  c2= -c1;
	  c2.showdata(); 
}

// OUTPUT 

// Enter the cost :- 
// 50
//  COST after 1Rs deduction  : 49


// Program by - TauqeerAhmad5201
