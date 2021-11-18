#include <stdio.h>

int main () {
    long long int n, x = 0;
    scanf ("%lld", &n);

    if (n > 0 && n <= 1000000000000) {

        long long int count = 0;

        for (long long int i = 1; x <= n; i++) {
            
            x = i * i;
            
            if (n % i == 0) {

                if (x < n) 
                    count += 2;

                else 
                    count ++;

            }
        }

        printf ("%lld\n", count);
    }
}