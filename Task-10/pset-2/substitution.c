#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>


int search (int len, int n, int arr[][n], int c) {

    int p1 = 0, p2 = len - 1, index;

    while (1) {

        index = p1 + (((p2 - p1) + 1) / 2);

        if (c < arr[index][0]) {

            p2 = index - 1;

        }

        else if (c > arr[index][0]) {

            p1 = index + 1;

        }

        else {

            return index;
            break;

        }
    }
}


int main (int argc, char *argv[]) {

    string text;
    int map[26][2], cont = 1;

    if (argc == 2 ) {

        // The main execution
        if (strlen(argv[1]) == 26) {

            char arr[26];

            // Checks if the Key provided is correct and Creates a map
            for (int i = 0, j = 'a'; i < 26; i ++, j++) {

                argv[1][i] = tolower(argv[1][i]);

                // Checks if the char has appeared before
                if (strchr (arr, argv[1][i])) {

                    printf ("Key must not contain repeated characters.\n");
                    cont = 0;
                    return 1;
                    break;

                }

                // Checks if the chars are all alphabetic
                else if (!islower(argv[1][i])) {

                    printf ("Key must contain alphabetic characters only.\n");
                    cont = 0;
                    return 1;
                    break;

                }

                arr[i] = argv[1][i];
                int diff = (int)argv[1][i] - j;
                map[i][1] = diff;
                map[i][0] = j;

            }

            if (cont) {

                text = get_string("plaintext : ");
                int i = 0, n = strlen (text);

                for (i = 0; i < n; i ++) {

                    char c = text[i];

                    if (isupper (c) || islower (c)) {

                        int index = search (26, 2, map, tolower(c));
                        c += map[index][1];

                    }

                    if (i == 0)

                        printf ("ciphertext: %c", c);

                    else

                        printf ("%c", c);

                }
                printf("\n");

                return 0;

            }
        }
        else {

            printf ("Key must contain 26 letters\n");
            return 1;

        }
    }
    else {

        printf ("Usage : ./substitution Key\n");
        return 1;

    }
}