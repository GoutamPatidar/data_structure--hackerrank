#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, ls = 0;
    cin >> n;
    cin >> q;
    int a, x, y;
    vector<vector<int>> v(n,vector<int>());

    for (int i = 0; i < q; i++)
    {
        cin >> a >> x >> y;
        if(a==1)
        {
            int idx=((x^ls)%n);
            v[idx].push_back(y);
        }
        else
        {
            int idx=((x^ls)%n);
            vector<int>vv=v[idx];
            ls=vv[(y%vv.size())];
            cout<<ls<<" "<<endl;
        }

    }
}
