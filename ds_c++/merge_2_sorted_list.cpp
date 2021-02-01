#include <bits/stdc++.h>
using namespace std;

class NODE
{
public:
    int data;
    NODE *next;

    NODE(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
void insertnode(NODE *&head, int data)
{
    NODE *newnode = new NODE(data);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    NODE *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
NODE* mergelist(NODE* head ,NODE* head1)
{
    NODE* temp=new NODE(0);
    NODE* cnode=temp;

    while(head!=nullptr && head1!=nullptr)
    {
        if(head->data<head1->data)
        {
            cnode->next=head;
            head=head->next;
        }
        else
        {
            cnode->next=head1;
            head1=head1->next;
        }
        cnode=cnode->next;
    }

    if(head!=nullptr)
        cnode->next=head;
    if(head1!=nullptr)
        cnode->next=head1;
    return (temp->next);
}


void printlist(NODE *head)
{
    NODE *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    NODE *head = NULL;
    int n;
    cin >> n;
    int data = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        insertnode(head, data);
    }

   NODE* head1=NULL;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        insertnode(head1, data);
    }
    head=mergelist(head,head1);
    printlist(head);
}
