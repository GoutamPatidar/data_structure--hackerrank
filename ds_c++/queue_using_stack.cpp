#include <bits/stdc++.h>
using namespace std;
stack<int> in;
stack<int> de;

void func1()
{
    while (!in.empty())
    {
        de.push(in.top());
        in.pop();
    }
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            int a;
            cin >> a;
            in.push(a);
        }
        else if (n == 2)
        {
            if (!de.empty())
            {
                de.pop();
            }
            else
            {
                func1();
                de.pop();
            }
        }
        else
        {
            if(!de.empty())
            {
            cout<<de.top()<<"\n";
            }
            else
            {
                func1();
                cout<<de.top()<<"\n";
            }
        }
    }
}