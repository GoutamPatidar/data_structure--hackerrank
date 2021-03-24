#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, k;
    cin >> t;
    cin >> k;

    priority_queue<int, vector<int>, greater<int>> v;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        v.push(n);
    }
    int flag = 0;
    while (v.size() > 1)
    {
        if (v.top() > k)
        {
            cout << flag << "\n";

            return 0;
        }
        else
        {
            int temp = v.top();
            v.pop();
            int tempp = v.top();
            v.pop();
            int summ = temp + (tempp * 2);
            v.push(summ);
            flag++;
        }
    }
    if (v.top() >= k && v.size() > 0)
        cout << flag << "\n";
    else
        cout << "-1\n";
}