#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main () {
    int i, n, count[3] = {0, 1, 0}, grade, L, S;
    string text = get_string("Text : ");
    n = strlen(text);

    for (i = 0; i < n; i ++) {
        char c = text[i];

        if (isupper(c) || islower(c)) {
            count[0] ++;
        }

        else if (c == ' ') {
            count[1] ++;
        }

        else if (c == '.' || c == '!' || c == '?') {
            count[2] ++;
        }

    }

    L = ((count[0] * 100) / count[1]) * 0.0588;
    S = ((count[2] * 100) / count[1]) * 0.296;

    grade = L - S - 15.8;

    if (grade < 1)
        printf ("Before Grade 1\n");
    else if (grade > 16)
        printf ("Grade 16+\n");
    else
        printf ("Grade %i\n", grade);
}