// ConsoleApplication63.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void odd(int n);
void even(int n);

int fun1(int n)
{
    if (n == 1)
        return 1;
    else
        return (1 + fun1(n - 1));
}

int fun2(int n)
{
    if (n == 0)
        return 1;
    else
        return (7 + fun2(n - 2));
}

int fact(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int fact2(int n)
{
    int a = 1;
    while (n != 0)
    {
        a = a * n;
        n--;
    }
    return a;

}

void even(int n)
{
    if (n <= 10)
    {
        cout << n - 1 << " ";
        n++;
        odd(n);
    }
    return;
}

void odd(int n)
{
    if (n <= 10)
    {
        cout << n + 1 << " ";
        n++;
        even(n);
    }
    return;
}

void fun3(int n)
{
    if (n == 0)
        return;
    else
    {
        cout << n << " ";
        return fun3(n - 1);
    }
}

void fun4(int n)
{
    if (n == 0)
        return;
    else
    {
        
         fun4(n - 1);
         cout << n << " ";
    }
}

int fun5(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return 1 + fun5(n / 2);
    }
}

void get(int n)
{
    //int b=0;
    if (n < 1)
        return;
    get(n - 1);
    get(n - 3);
    //b = n + b;
    cout << n << " ";
}

void get2(int n)
{
    int i = 0;
    if (n > 1)
    {
        get2(n - 1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "*";
    }
}

int get3(int n)
{
    static int i = 50;
    int k;
    if (i == n)
    {
        cout << "something !";
        k = get3(i);
        return 0;
    }
    else return 0;

}

int get4(int n)
{
    int x = 1, k;
    if (n == 1)
        return x;
    for (int k = 1; k < n; ++k)
    {
        x = x + get4(k) * get4(n - k);
    }
    return x;
}

void get5(int n)
{
    static int d = 1;
    cout << n << " ";
    cout << d << " ";
    d++;
    if (n > 1)
        get5(n - 1);
    cout << d << " ";
}


int main()
{
    int num;
    int a = 1;
    int n = 3;
    cout << "\n\t Direct Recursion\n" << endl;
    cout << fun1(n);
    cout << endl;
    cout << fun2(4);
    cout << endl;

    cout << "\n\t Indirect Recursion \n" << endl;

    cout << "Wap the function from 1 to 10 ,if number is odd add 1 and number is even substract 1. \n";
    odd(a);

    cout << "\n\t Tail recursion\n" << endl;
    fun3(4);
    cout << endl;

    cout << "\n\t non-Tail recursion\n" << endl;
    fun4(4);
    cout << endl;
    cout << fun5(8);
    cout << endl;

    cout << "\n\tRecursive VS Iterative\n" << endl;
    cout << "Now Calculate the Factorial of the number " << endl;
    cout << "Enter the number you want to caculate the factorial : ";
    cin >> num;
    cout << endl;
    cout << "Factorial : " << fact(num) << endl;
    cout << "Factorial : " << fact2(num) << endl;

    cout << "\n\t EXAMPLES \n" << endl;

    cout << "EXAMPLE # 1 :  ";
    get(6);
    cout << endl;

    cout << "EXAMPLE # 2  :  ";
    get2(3);
    cout << endl;

    cout << "EXAMPLE # 3  :  ";
    cout<<get3(5);
    cout << "\n(d) The funvtion will exhaust the runtime stack or run into infinite loop when j=50 .";
    cout << endl;

    cout << "EXAMPLE # 4  :  ";
    cout << get4(5);
    cout << endl;

    cout << "EXAMPLE # 5  :  ";
    get5(3);
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
