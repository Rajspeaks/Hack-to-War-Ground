#include <iostream>
using namespace std;

int sum(int a[][100], int m, int n){
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int tl = (i+1)*(j+1);
            int br = (m-i)*(n-j);
            sum+= (tl * br) * a[i][j];

        }
    }
    return sum;
}
int main() {
	int a[100][100];
	int m;
	int n;
	cin>>m;
	cin>>n;
	for (int i = 0; i < m; i++) {
	    for (int j = 0; j < n; j++) {
	        cin>>a[m][n];
	    }
	}
	cout<<sum(a,m,n);
	return 0;
}