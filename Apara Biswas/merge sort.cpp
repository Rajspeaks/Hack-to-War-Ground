#include <bits/stdc++.h>
using namespace std;

// for merging sorted subarrays of given array

void merge(int a[], int l, int mid, int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    
    int b[n1];   // temporary arrays
    int c[n2];
    
    for(int i=0;i<n1;i++)
    b[i]=a[l+i];
    
    for(int i=0;i<n2;i++)
    c[i]=a[mid+1+i];
    
    int i=0;    //for n1 array
    int j=0;    //for n2 array
    int k=l;    // for final array
    
    while(i<n1 && j<n2)
    {
        if(b[i]<c[j])
        {
            a[k]=b[i];
            k++;
            i++;
        }
        else
        {
            a[k]=c[j];
            k++;
            j++;
        }
    }
    
    while(i<n1){
        a[k]=b[i];
            k++;
            i++;
    }
    while(j<n2)
    {
        a[k]=c[j];
            k++;
            j++;
    }
}

// for sorting 

void mergesort(int a[], int l, int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a, l, mid);
        mergesort(a, mid+1, r);
        
        merge(a, l, mid, r);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    mergesort(a, 0, n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}

// Output

// 8
// 1 5 3 8 7 2 6 4
// 1 2 3 4 5 6 7 8

// Program by: Apara Biswas