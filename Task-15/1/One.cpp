#include <iostream>

using namespace std;

unsigned long long int sumit(unsigned long long int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    unsigned long long int t, n, i, j;
    cin >> t;
    for (i = 0; i < t; i ++) {
        unsigned long long int no[] = {3, 5, 15};
        cin >> n;
        for (j = 0; j < 3; j ++) {
            unsigned long long z = (n - 1) / no[j];
            no[j] *= sumit(z);
        }
        cout << no[0] + no[1] - no[2]<< endl;
    }
}

