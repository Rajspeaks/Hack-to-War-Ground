//program to compute nth term of the fibonacci series using the concept of recursion
#include<iostream>
using namespace std;

long fib(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    cout<<fib(n);
    return 0;
} 

// Fibonacci Series is   0,1,1,2,3,5,8,13,21.....
//If n=8, then output will be 13 (8th term)


// BY : Urwashi Kumrawat
