#include<iostream>
using namespace std;
int main()
{
    unsigned int n;
    int i;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=n;i>0;i--)
    {
        cout<<a[i];
    }
}
