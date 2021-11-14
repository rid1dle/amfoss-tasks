#include <stdio.h>

int main () {
    long long int m, n, i, j, count = 0, countj = 0, k = 0;
    scanf ("%lld %lld", &n, &m);

    
        if (n % 2 == 0) {
            while (n % 2 != 1) {
                n /= 2;
                count ++;
            }
            long long int arr[m + 1];
            
            for (i = 1; i <= m; i ++) {
                if (i % 2 == 1){
                    arr[k] = i;
                    k ++;
                    }
                else {
                    countj = 0;
                    for (j = i; j % 2 != 1; j /= 2)
                        countj ++;
                    if (count > countj) {
                        arr[k] = i;
                        k ++;
                    }
                }
            }
            printf ("%lld\n", k);
            for (i = 0; i < k; i ++) {
                printf ("%lld ", arr[i]);
            }
            printf ("\n");
        }

        else 
            printf ("0\n");

    }