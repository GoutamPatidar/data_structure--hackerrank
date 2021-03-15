#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    int ht;

    Node(int d)
    {
        val = d;
        left = NULL;
        right = NULL;
        ht=1;
    }
};


int height(Node* root)
{
    if(!root)
    return 0;
    return root->ht;
}

Node* rightrotation(Node*root)
{
    Node* templ=root->left;
    Node* templ_r=templ->right;

    templ->right=root;
    root->left=templ_r;
    root->ht=max(height(root->left),height(root->right))+1;
    templ->ht=max(height(templ->left),height(templ->right))+1;
    return templ;

}

Node* leftrotation(Node*root)
{
    Node*templ=root->right;
    Node* temp2=templ->left;
    templ->left=root;
    root->right=temp2;
    root->ht=max(height(root->left),height(root->right))+1;
    templ->ht=max(height(templ->left),height(templ->right))+1;
    return templ;
}

int balancefactor(Node* temp)
{
    if (!temp)
    return 0;
    int balance=height(temp->left)-height(temp->right);
    return balance;
}

 Node *insert(Node *root, int data)
    {
        Node *temp = root;
        if (temp == nullptr)
        {
            Node *newnode = new Node(data);
            temp = newnode;
            return temp;
        }
        if (temp->val >data)
            temp->left = insert(temp->left, data);
        else
        {
            temp->right = insert(temp->right, data);
        }
        temp->ht=max(height(temp->left),height(temp->right))+1;
       int bal=balancefactor(temp);
       if(bal<-1 && data>temp->right->val)
       {
           return leftrotation(temp);
       }
       if(bal>1 && data<temp->left->val)
       {
           return rightrotation(temp);
       }
       if(bal<-1 && data<temp->right->val)
       {
         temp->right= rightrotation(temp->right);
           return leftrotation(temp);
       }
          if(bal>1 && data>temp->left->val)
       {
            temp->left=leftrotation(temp->left);
            return rightrotation(temp);
       }
      return root;
    }

 void preOrder(Node *root)
    {

        if (root == NULL)
            return;

        cout << root->val << " ";

        preOrder(root->left);
        preOrder(root->right);
    }

int main()
{
    Node *root = NULL;

    int t;
    int data;

    std::cin >> t;

    while (t-- > 0)
    {
        std::cin >> data;
        root=insert(root, data);
    }
    preOrder(root);

    return 0;
}
