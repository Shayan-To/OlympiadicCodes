#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    int n;

    cin >> n;
/*
    for (a; b; c)
    {
        d;
    }

    for (int i = 0; i < n; i++)
    {

    }

    for (int i = 0; i < n; i++)
    {

    }

    a;
    while (b)
    {
        d;

        c;
    }
    */

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }

    for (int m = n; m >= 2; m--)
    {
        for (int i = 0; i < m - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                int c = v[i];
                v[i] = v[i + 1];
                v[i + 1] = c;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << '\t';
    }

    return 0;
}
