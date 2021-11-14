#include <stdio.h>
#include <cs50.h>

int main() {
    long int cno;
    int sum = 0, digit, count = 0, len = 0, n1, n2, n;

    cno = get_long("Number : ");

    count = 1;
    do {

        digit = cno % 10;
        cno /= 10;

        if (count % 2 == 0){

            n1 = digit;
            int temp = digit * 2;
            if(temp > 9)
                temp = temp % 10 + 1 ;

            sum += temp;
        }

        else {
            n2 = digit;
            sum += digit;
        }
        count ++;
    }
    while(cno);
    count --;

    if (count % 2 == 0)
        n = n1 * 10 + n2;
    else
        n = n2 * 10 + n1;

    if (!(sum % 10)) {
        if ((n == 51 || n == 52 || n == 53 || n == 54 || n == 55) && count == 16) {
            printf("MASTERCARD\n");
        }

        else if ((n == 34 || n == 37) && count == 15) {
            printf("AMEX\n");
        }

        else if ((n / 10 == 4) && (count == 13 || count == 16)) {
            printf("VISA\n");
        }

        else
            printf("INVALID\n");
    }

    else
        printf("INVALID\n");
}