#include <iostream>
#include <stack>
#include <math.h>
#include <algorithm>
using namespace std;

bool isValid(string s)
{
    int n=s.size();
    stack<char> st;
    
    bool ans=true;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='[' || s[i]=='{' || s[i]=='(')
        st.push(s[i]);
        else if(s[i]==')')
        {
            if(!st.empty() && st.top()=='(')
            st.pop();
            else
            {
                ans=false;
                break;
            }
        }
        else if(s[i]==']')
        {
            if(!st.empty() && st.top()=='[')
            st.pop();
            else
            {
                ans=false;
                break;
            }
        }
        else if(s[i]=='}')
        {
            if(!st.empty() && st.top()=='{')
            st.pop();
            else
            {
                ans=false;
                break;
            }
        }
    }
    if(!st.empty())
    {
        return false;
    }
    return true;
 
}

int main()
{
    string s;
    cin>>s;
    
    if(isValid(s))
    cout<<"balanced parenthesis"<<endl;
    else
    cout<<"unbalanced parenthesis"<<endl;
}

// Output

// {[()]}
// balanced parenthesis

// [(}]
// unbalanced parenthesis

// Program by: Apara Biswas
