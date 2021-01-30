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

bool detect_cycle(NODE *head)
{
    set<int> s;
    NODE *temp = head;
    while (temp != nullptr)
    {
        if (s.find(temp->data) == s.end())
        {
            return 1;
        }
        s.insert(temp->data);
        temp = temp->next;
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

    // printlist(head);
    cout << detect_cycle(head);
}
