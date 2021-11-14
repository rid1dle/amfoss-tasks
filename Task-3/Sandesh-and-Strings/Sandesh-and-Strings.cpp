#include <iostream>
#include <algorithm>

using namespace std;

bool comparator(char a,char b)
{
    return a < b;
}

int main() {
    int i, j, n, k = 0, sum = 0;
    char temp;
    cin >> n;
    char str[n];
    cin >> str;
    int chrlst[n][2];
    bool proceed = true, exec = true;

    for (i = 0; i < n / 2; i ++) {
        if (str[i] != str[n - i - 1]) {
            proceed = false;
        }
    }

    if (!proceed) {
        sort(str, str + n, comparator);
        chrlst[0][0] = str[0];
        chrlst[0][1] = 1;
        for (i = 0; i < n; i ++) {
            if (str[i] == str[i + 1]) {
                chrlst[k][1] ++;
            }

            else {
                if (chrlst[k][1] % 2 == 1) {
                    chrlst[k][1] --;
                    if (exec) 
                        temp = str[i];
                    sum ++;
                    exec = false;
                }
                k ++;
                chrlst[k][1] = 1;
                chrlst[k - 1][0] = str[i];
            }
        }
        sum = !exec ? n - sum + 1 : n - sum;
        cout << sum << endl;
        for (i = 0; i < k; i ++) {
            int val = chrlst[i][1];
            for (j = 0; chrlst[i][1] > val / 2; j ++) {
                cout << (char)chrlst[i][0];
                chrlst[i][1] --;
            }
        }

        if (!exec)
            cout << temp;

        for (i = k - 1; i >= 0; i --) {
            for (j = 0; chrlst[i][1] > 0; j ++) {
                cout << (char)chrlst[i][0];
                chrlst[i][1] --;
            }
        }

        cout << endl;

    }

    else {
        cout << n << endl;
        for (i = 0; i < n; i ++) {
            cout << (char)str[i];
        }
        cout << endl;
    }
}