
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


bool check_bst(node* root,int max, int min){
if(root==nullptr)
return 1;
if(root->data>max || root->data<min)
return 0;
return(check_bst(root->l,root->data-1,min)&& check_bst(root->r,max,root->data+1));
}

bool is_binary(node* root){
    return check_bst(root,INT_MAX,INT_MIN);
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
  
   if(is_binary(root))
   cout<<"binary_tree\n";
   else
   cout<<"not binary tree\n";
}
