#include <stdio.h>
#include <cs50.h>

int main() {
    int i, j, n;
    do {
        n = get_int("Enter the value of n between 0 - 8 : ");
    }
    while (n < 1 || n > 8);

    for (i = 0; i < n; i++) {

        for (j = 0; j <  n + i + 3; j++) {

            if (j < n - (i + 1) || j == n || j == n + 1)
                printf(" ");

            else
                printf("#");
        }

    printf("\n");

    }
}