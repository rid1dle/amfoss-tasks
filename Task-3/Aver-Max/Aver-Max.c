#include <stdio.h>

// using namespace std;

int main()
{
    long long int t, n, k, i, j;
    scanf("%lld", &t);
    double max = 0, ans[t];

    for (i = 0; i < t; i++)
    {
        max = 0;
        scanf("%lld, %lld", &n, &k);

        float arr[n];

        for (j = 0; j < n; j++)
        {
            scanf("%f", &arr[j]);

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
        printf("%f \n", ans[i]);
    }
}