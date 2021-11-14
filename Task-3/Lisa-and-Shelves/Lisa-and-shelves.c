#include <stdio.h>

int main () {
    long long int n;
    scanf ("%lld", &n);

    if (n > 0 && n <= pow (10, 12)) {

        int count = 0;

        for (int i = 1; i * i <= n; i++) {

            if (n % i == 0) {

                if (i * i < n) 
                    count += 2;

                else 
                    count ++;

            }
        }

        printf ("%d\n", count);
    }
}