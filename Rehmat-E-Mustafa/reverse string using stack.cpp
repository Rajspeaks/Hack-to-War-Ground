//name : Rehmat- E- Mustafa

#include<iostream>
#include<stack>
using namespace std;
void reverseString(char * arr,int n)
{
	stack<char> S;
	for (int i = 0; i < n; i++)
	{
		S.push(arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = S.top();
		S.pop();
	}
}
int main()
{
	char arr[100];
	int n;
	cout << "\nEnter the size of array: ";
	cin >> n;
	cout << "\nEnter the elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	reverseString(arr, n);
	cout << "\nThe Reversed array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}