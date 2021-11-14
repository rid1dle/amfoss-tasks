#include <iostream>

using namespace std;

int main()
{
    long long int t, n, k, i, j;
    cin >> t;
    float max = 0.0, ans[t];

    for (i = 0; i < t; i++)
    {
        max = 0.0;
        cin >> n >> k;

        float arr[n];

        for (j = 0; j < n; j++)
        {
            cin >> arr[j];

            if (k > 0 && arr[j] < 0)
            {
                arr[j] = -arr[j];
            }

            if (max < arr[j])
            {
                max = arr[j];
            }
        }

        ans[i] = max;
    }

    for (i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
}