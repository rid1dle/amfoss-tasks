#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int n, i, val = 0;
        cin >> n;

        while (n % 2 == 0)
        {
            val = 2;
            n = n / 2;
        }

        for (i = 3; i * i <= n; i = i + 2)
        {
            while (n % i == 0)
            {
                val = i;
                n = n / i;
            }
        }

        if (n > 2)
        {
            val = n;
        }
        cout << val << endl;
    }
}