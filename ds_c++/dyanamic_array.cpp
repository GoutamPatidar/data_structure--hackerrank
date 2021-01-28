#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    int n, t, i, lastans = 0;
    cin >> n;
    cin >> t;
    vector<int> *v;
    v = new vector<int>[n];
    for (i = 0; i < t; i++)
    {
        int a, x, y;
        cin >> a >> x >> y;
        if (a == 1)
            v[(x ^ lastans) % n].push_back(y);
        else
        {
            
            vector<int> c = v[(x ^ lastans) % n];
            lastans = c[y % c.size()];
            cout << lastans << " " << endl;
        }
    }
    delete[] v;
}