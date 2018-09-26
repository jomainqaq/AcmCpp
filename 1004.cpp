#include <String>
#include <iostream>
using namespace std;
int main()
{

    int n;
    int t;
    while (cin >> n && n)
    {
        string b[n];
        int v = n;
        while (n--)
        {
            cin >> b[n];
        }
        int r[v];
        for (int i = 0; i < v; i++)
        {
            r[i] = 0;
            for (int j = 0; j < v; j++)
            {
                if (b[i] == b[j])
                    r[i]++;
            }
        }
        int q = 0;
        for (int e = 0; e < v; e++)
        {
            if (r[q] <= r[e])
                q = e;
        }
        cout << b[q] << endl;
    }
    return 0;
}
