#include <iostream>

using namespace std;

int main() {
    unsigned long long int t;
    cin >> t;
    while (t --) {
        unsigned long long int ar[] = {1, 2}, val = 3, i, t, n, sum = 2;
        cin >> n;
        for (i = 0;; i ++) {
            if (n > 1) {
                val = ar[0] + ar[1];
                if (val >= n) break;
                ar[0] = ar[1];
                ar[1] = val;
                if (val % 2 == 0) {
                    sum += val;
                }
            }
            else {
                sum = 0;
                break;
            }    
        }
        cout << sum << endl;
    }
}