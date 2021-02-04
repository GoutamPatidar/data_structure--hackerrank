#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    node *l = nullptr;
    node *r = nullptr;
    int data = 0;
    node(int data)
    {
        this->l = nullptr;
        this->data = data;
        this->r = nullptr;
    }
};

void create(node *&root, int data)
{
   
    if (root == nullptr)
    {
        node *newnode = new node(data);
        root = newnode;
        return;
    }
    node *temp = root;
    if (temp->data > data)
        create(temp->l, data);
    else
        create(temp->r, data);
}

int height(node*root)
{
    if(root==nullptr)
    return -1;
    int lsum=0,rsum=0;
    lsum=height(root->l)+1;
    rsum=height(root->r)+1;
    return max(lsum,rsum);
}

int main()
{
    node *root = nullptr;
    int t, data;
    cin >> t;

    while (t--)
    {
        cin >> data;
        create(root, data);
    }
    cout<<height(root);
    
}
