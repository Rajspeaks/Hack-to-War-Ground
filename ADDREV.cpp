#include <bits/stdc++.h>
using namespace std;
int rev (int j)
{ int res=0;
  while (j!=0)
  { res =res*10 + j%10;
     j= j/10;
  }
  return res;
}
int zrev (int j)
{ 
  int res=0;
  while (j!=0)
  { res =res*10 + j%10;
     j= j/10;
  }
  while (res!=0)
  { if(res%10==0)
    {
     res=res/10;
    }
    else
    {
        break;
    }
  }
  return res;
}
int main() {
  int n,m,a=0,t;
  cin>>t;
   for(int i=0;i<t;i++)
   { cin>>n>>m;
    a=rev(n)+rev(m);
    cout<<zrev(a)<<endl;
   }
    
}