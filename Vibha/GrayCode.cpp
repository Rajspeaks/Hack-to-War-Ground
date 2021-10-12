//Given 'n' obtain the gray code series
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,gray;
    cin>>n;
    for(int i=0;i<(1<<n);i++)
    {
        gray=i^(i>>1);
        bitset<16>b (gray);
        string s=b.to_string();
        cout<<s.substr(16-n)<<endl;
    }
}

/*
Input:3
Output:
00
01
11
10
*/

//Name: Vibha V
