#include <iostream>
#include <set>

using namespace std;

int main()
{
    set <long long int> xLines, yLines;
    multiset<long long int> xParts, yParts;
    long long int w, h;
    int n;

    cin >> w >> h >> n;

    xParts.insert(w);
    yParts.insert(h);

    xLines.insert(0);
    xLines.insert(w);
    yLines.insert(0);
    yLines.insert(h);

    for (int iii = 0; iii < n; iii++)
    {
        char d;
        long long int l;

        cin >> d >> l;

        set <long long int> *lines;
        multiset <long long int> *parts;

        if (d == 'H')
        {
            lines = &yLines;
            parts = &yParts;
        }
        else
        {
            lines = &xLines;
            parts = &xParts;
        }

        set <long long int>::iterator it = lines->insert(l).first;
        it--;
        long long int prev = *it;
        it++; it++;
        long long int next = *it;

        parts->erase(parts->find(next - prev));
        parts->insert(l - prev);
        parts->insert(next - l);

        /*
        cout << "xL" << '\t';
        for (multiset <long long int>::iterator i = xLines.begin(); i != xLines.end(); i++)
        {
            cout << *i << '\t';
        }
        cout << '\n';
        cout << "yL" << '\t';
        for (multiset <long long int>::iterator i = yLines.begin(); i != yLines.end(); i++)
        {
            cout << *i << '\t';
        }
        cout << '\n';
        cout << "xP" << '\t';
        for (set <long long int>::iterator i = xParts.begin(); i != xParts.end(); i++)
        {
            cout << *i << '\t';
        }
        cout << '\n';
        cout << "yP" << '\t';
        for (set <long long int>::iterator i = yParts.begin(); i != yParts.end(); i++)
        {
            cout << *i << '\t';
        }
        cout << '\n';
        */
        cout << *--xParts.end() * *--yParts.end() << '\n';
        //cout << "--------------------\n";
    }

    return 0;
}
