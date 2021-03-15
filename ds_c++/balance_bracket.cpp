#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char>v;
    int i=0;
    for( i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='{' ||s[i]=='[')
        {
         v.push(s[i]);   
        }
        else {
        if(s[i]==']')
        {
            if(v.top()!='[')
            {cout<<"1";
                return "NO";
                
            }
            v.pop();
             
        }
        else  if(s[i]=='}')
        {  
            if(v.top()!='{')
            {
                cout<<"2";
                return "NO";
            }
             v.pop();
        }
        else {
        if(v.top()!='(')
            {
                cout<<"3";
                return "NO";
            }
              v.pop();
        }
        }
    }
    if(!v.empty())
    return "NO";
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
