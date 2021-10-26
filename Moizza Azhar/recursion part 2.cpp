// ConsoleApplication64.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

void foo(int n)
{
    if (n <= 0)
        return;
    else
        cout << n << " ";
    foo(n - 1);
}

void bar(int n)
{
    if (n <= 0)
        return;
    else
        cout << n << " ";
    bar(n - 2);
}

void dib(int n)
{
    if (n <= 0)
        return;
    
    dib(n - 1);
    cout << n << " ";
    dib(n - 1);
    cout << n << " ";
}

void lib(int n)
{
    if (n <= 0)
        return;

    lib(n - 2);
    cout << n << " ";
    lib(n - 2);
    cout << n << " ";
}

int main()
{
    int n;
    cout << fib(7) << endl;
    foo(5);
    cout << endl;
    bar(8);
    cout << endl;
    dib(5);
    cout << endl;
    cout << endl;
    lib(8);
    cout << endl;
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
