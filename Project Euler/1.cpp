#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int c = 0;

    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 | i % 5 == 0)
        {
            c += i;
        }
    }

    cout << c << '\n';

    return 0;
}
