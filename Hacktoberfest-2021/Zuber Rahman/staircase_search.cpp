#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int stair(int a[][100], int n, int x) {
    if (n==0)
    return -1;
    
    int smallest = a[0][0];
    int largest = a[n-1][n-1];
    if(smallest > x || largest < x)
    return -1;
    
    int i = 0;
    int j = n-1;
    
    while(i < n && j>=0) {
        if(a[i][j] == x)    {
        cout<<" Element found at "<<i<<","<<j;
        return 1;
        }
        
        if(a[i][j] > x){
            j--;
        }
        
        else {
           i++;
        }
    }
    
    cout<<"element not found";
    return 0;
}
int main() {
	int arr[100][100];
	int n;
	cin>>n;
	int x;
	cin>>x;
	for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
	       cin>>arr[i][j];
	    }
	}
	cout<< stair(arr,n,x);

	return 0;
}
