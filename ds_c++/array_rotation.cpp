#include<bits/stdc++.h>

using namespace std;

void rotate(int a [],int n)
{
  
    int i,b;
    b=a[0];
   
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=b;
}

int main()
{
    int n,r,i;
    cin>>n;
    cin>>r;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<r;i++)
    {
        rotate(a,n);
    }
    for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
}