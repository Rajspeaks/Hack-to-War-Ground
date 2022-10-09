//  ███████╗███╗   ██╗███████╗██╗  ██╗
//  ██╔════╝████╗  ██║██╔════╝██║  ██║
//  ███████╗██╔██╗ ██║█████╗  ███████║
//  ╚════██║██║╚██╗██║██╔══╝  ██╔══██║
//  ███████║██║ ╚████║███████╗██║  ██║
//  ╚══════╝╚═╝  ╚═══╝╚══════╝╚═╝  ╚═╝
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mod 1000000007
#define endl '\n'
#define fo(i,o,n) for(int i=o;i<n;i++)
#define rfo(i,o,n) for(int i=n-1;i>=o;i--)
#define all(v) v.begin(),v.end()
#define vi vector<int> 
#define mii map<int,int>
#define miv map<int,vector<int>>
#define pb push_back

bool is_parenthesis(string s){
    stack<char>st;
    fo(i,0,s.size()){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
        else if(s[i]==')' && st.top()=='(') st.pop();
        else if(s[i]=='}' && st.top()=='{') st.pop();
        else if(s[i]==']' && st.top()=='[') st.pop();
    }
    if(st.size()==0) return true;
    else return false;
}

int32_t main(){
    f;
    string s; cin>>s;
    if(is_parenthesis(s)){
        cout<<"YES"<<endl;
    }   
    else cout<<"NO"<<endl;
    
    return 0;
}
/*Input Output 
input = {}([{}])()
output = YES*/

// Name == Sneh Shah
