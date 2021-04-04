#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->right = nullptr;
        this->left = nullptr;
    }
};

void inorder(node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void swapSubtreesOfLevel(node *root, int k)
{
    if (!root)
        return;
    queue<node *> q;
    q.push(root);
    q.push(nullptr);
    int level = 1;
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            if (!q.empty())
            {
                q.push(nullptr);
            }
            level++;
        }
        else
        {
            if (level == k)
            {
                node *sw = temp->left;
                temp->left = temp->right;
                temp->right = sw;
            }

            if (temp->left)
            {

                q.push(temp->left);
            }
            if (temp->right)
            {

                q.push(temp->right);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    queue<node *> q;
    node *root = new node(1);
    q.push(root);
    q.push(nullptr);
    int level = 1;

    while (n && !q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            if (!q.empty())
            {
                q.push(nullptr);
            }
            level++;
        }
        else
        {
            int a, b;
            cin >> a >> b;
            if (a != -1)
            {
                temp->left = new node(a);
                q.push(temp->left);
            }
            if (b != -1)
            {
                temp->right = new node(b);
                q.push(temp->right);
            }
            n--;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int itr = 2;
        int lvl = k;
        while (lvl <= level)
        {
            swapSubtreesOfLevel(root, lvl);
            lvl = itr * k;
            itr++;
        }
        inorder(root);
        cout << endl;
    }
    return 0;
}