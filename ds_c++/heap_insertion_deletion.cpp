#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&v,int i,int n)
{
   int  large=i;
   int  l=i*2;
    int  r=i*2+1;
    if(l<n && v[l]>v[large])
    large=l;
    if(r<n && v[r]>v[large])
    large=r;
    if(large!=i){
    swap(v[large],v[i]);
    heapify(v,large,n);
    }
}

void heapsort(vector<int>&v,int n)
{
    for(int i=n/2;i>=1;i--)
    {
        heapify(v,i,n);
    }
    // for (int i=n-1;i>0;i--)
    // {
    //     swap(v[0],v[i]);
    //     heapify(v,0,i);
    // }
}
int find_(vector<int>v,int q)
{
    for(int i=0;i<v.size();i++)
    if(v[i]==q)
    return i;
    return 0;
}

int main()
{
    int t;
    cin>>t;
    vector<int>v;
    v.push_back(10000000);
    while(t--)
    {
        
        int n;
        cin>>n;
        if(n==1)
        {
           int q;
           cin>>q; 
             q=0-q;
           v.push_back(q);
           heapsort(v,v.size());
    
        }
        else if(n==2)
        {
            int q;
            cin>>q;
            q=0-q;
        auto x=find_(v,q);
         int temp=v[x];
         v[x]=v[v.size()-1];
         v.pop_back();
         heapify(v,x,v.size());
        }
        else
        {
           cout<<0-v[1]<<"\n"; 
        }
    }
}