#include <bits/stdc++.h>
using namespace std;
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second

typedef vector<int>		vi;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;

void binary_search(int arr[],int k , int ,int);

// guys No need to panic I have used a template to write code
// this will demonstrate how you can use a template to speed up coding

void solve()
{
	int n,t=1,i,j,k;
	cout<< "enter size of array"<<"  ";
	cin>>n;
	int arr[n];
	cout<<" enter the key  ";
	cin>>k;
	// enter sorted array
	fo(i,n)
	{
		cin>>arr[i];
	}
	// binary search
	int left = 0;
	int right = n-1;
	binary_search(arr,k , left , right);

}
int main()
{
    // refer if end if guide on google to know more about these lines
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt","w", stdout);
	#endif
	solve();
}
void binary_search( int arr[] ,int k ,int left,int right)
{
	int mid,i=0,j=0;
	mid = (left + right)/2;
	if(arr[mid] == k)
		{
			cout<< "element found at position" << mid <<endl;
			return;
		}
	else if(arr[mid] >k)
		{
			binary_search(arr,k,left,mid-1);
		}	
	else if(arr[mid]<k)
	{
		binary_search(arr,k,mid+1,right);
	}
}

/* Input:
5
11
2 3 5 9 11

output:key  element found at position4
*/

//This program is contributed by Mohd Abdul Subhan