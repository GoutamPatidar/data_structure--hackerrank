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

void insertnodeathead(NODE* &head,int data)
{
    NODE* newnode=new NODE(data);
    newnode->next=head;
    head=newnode;
}


bool comparelist(NODE * head,NODE* head1)
{
while(head!=NULL || head1!=NULL)
{
    if(head==nullptr)
    return 0;
    if(head1==nullptr)
    return 0;
    if(head->data==head1->data)
    {
     head=head->next;
     head1=head1->next;
    }
    else
    {
        return 0;
    }
}
return 1;
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
    NODE * head1=NULL;
    cin>>n;
     for (int i = 0; i < n; i++)
    {
        cin >> data;
        insertnode(head1, data);
    }
    cout<<comparelist(head,head1);

   // printlist(head);
}
