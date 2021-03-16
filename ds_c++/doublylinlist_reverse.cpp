#include <bits/stdc++.h>

using namespace std;

class node

{
public:
    node *p;
    int data;
    node *n;

    node(int data)
    {
        this->p = nullptr;
        this->data = data;
        this->n = nullptr;
    }
};

void insertin(node *&head, int data)
{
    node *newnode = new node(data);
    if (head == nullptr)
        head = newnode;
    else
    {
        node *temp = head;
        while (temp->n != nullptr)
            temp = temp->n;
        newnode->p = temp;
        temp->n = newnode;
    }
}

void insertatsort(node *&head, int data)
{
    node *newnode = new node(data);
    if (head == nullptr)
        head = newnode;
    else
    {
        node *temp = head;
        while (temp->data < data)
            temp = temp->n;
        newnode->n = temp;
        newnode->p=temp->p;
        temp->p->n = newnode;
    }
}

void printlistrev(node *head)
{
    node *temp = head;
    while(temp->n!=nullptr)
    temp=temp->n;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->p;
    }
}

int main()
{
    node *head = nullptr;
    int n;
    cin >> n;
    int data;
    for (int i = 0; i < n; i++)
    {

        cin >> data;
        insertin(head, data);
    }
    printlistrev(head);
}
