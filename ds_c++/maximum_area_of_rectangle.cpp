#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    //sort(v.begin(), v.end());
    stack<int> s;
    int i = 0, j = 0, sum = 0, max = 0, top = -1;
    while (i < n)
    {
        if (s.empty() || v[s.top()]<=v[i]){
            s.push(i);
            i++;
        }
        else
        {
             top = s.top();
                s.pop();
            if(s.empty())
            {
               
                sum=(v[top]*i);
            }
            else
            {
                
                sum=v[top]*(i-s.top()-1);
            }
            if(sum> max)
            max=sum;
        }
    }
    while(!s.empty())
    {
        top=s.top();
        s.pop();
        if(s.empty())
        {
            sum=(v[top]*i);
        }
        else
        {
           sum=v[top]*(i-s.top()-1);  
        }
        if(sum>max)
        max=sum;
    }
    cout<<max<<"\n";
}
