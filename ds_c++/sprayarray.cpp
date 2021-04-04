#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ss,i,j;
    cin >> ss;
    string a[ss];
    for(i=0;i<ss;i++)
    {
        cin>>a[i];
    }
    int qs;
    cin >> qs;
    string b[qs];
     for(i=0;i<qs;i++)
    {
        cin>>b[i];
    }
    for (i = 0; i < qs; i++)
    {
        int flag = 0;
        for (j = 0; j < ss; j++)
        {
            if (b[i] ==a[j])

            {
                flag++;
            }
        }
        cout << flag << endl;
    }
}