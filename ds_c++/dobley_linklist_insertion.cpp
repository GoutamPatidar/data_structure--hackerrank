#include<bits/stdc++.h>

using namespace std;

class node

{
    node* p;
    int data;
    node* n;
    node(int data)
    {
        this->p=nullptr;
        this->data=data;
        this->n=nullptr;
    }
};

int main()
{
    node * head=nullptr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        head=insertin(head,data);
    }
}