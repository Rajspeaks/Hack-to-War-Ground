#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maxSum = 0;
	int curr_sum = 0;
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n ; ++i)
	{
		curr_sum = curr_sum + a[i];
		if(curr_sum > maxSum)
			maxSum = curr_sum;
		// if we incurr a negative sum discard previous val and continue
		if (curr_sum < 0 )
		{
			curr_sum = 0;
		}
	}
	if(maxSum == 0)
	{
	   maxSum = *max_element(a, a+n);
	} 
	cout<< maxSum;
}
// input
// 5 
// 3 2 5 9 6
// output
// 25
//This program is contributed by Mohd Abdul Subhan