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

int merge(NODE *head, NODE *head1, int n, int n1)
{
    int k;
    if (n < n1)
    {
        k = n1 - n;
        while (k)
        {
            head1 = head1->next;
            k--;
        }
    }
    else
    {
        k = n - n1;
        while (k--)
        {
            head = head->next;
        }
    }
    while(head!=nullptr || head1!=nullptr)
    {
        if(head->data==head1->data)
        return head->data;
        head=head->next;
        head1=head1->next;
    }
    return 0;
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
    int n1;
    cin >> n1;
    NODE *head1 = nullptr;
    for (int i = 0; i < n; i++)
    {
        cin >> data;
        insertnode(head1, data);
    }
    cout << merge(head, head1, n, n1);
   // printlist(head);
}
