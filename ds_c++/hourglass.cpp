#include <iostream>
using namespace std;
int check(int a[6][6], int x)
{
    int i, j, b,c=-100;
    for (i = 0; i < x - 2; i++)
    {
        for (j = 0; j < x - 2; j++)
        {
            b = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j + 1] + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];

        if (b > c)
        {
            c = b;

        }
        }
    }
     return (c);
}

int main()
{
    int x, i, j;
    x=6;
    int a[6][6];
    for (i = 0; i <6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << check(a, x);
}
