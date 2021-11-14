#include <iostream>

using namespace std;

int main () {
    long long int d, ps, i, j, sum = 0, min = 0;
    bool cross = false;
    cin >> d >> ps;
    long long int pod[d], pops[ps];
    
    for (i = 0; i < d; i ++) {
        cin >> pod[i];
    }
    for (i = 0; i < ps; i ++) {
        cin >> pops[i];
    }
    if (d <= ps) {
        for (i = 0; i < d; i ++) {
            cross = false;
            int temp;
            bool exec = false;
            for (j = 0; j < ps; j ++) {
                if (pops[j] > pod[i]) {
                    if (!exec) {
                        min = pops[j];
                        exec = true;
                        temp = j;
                    }
                    else if (exec && min > pops[j]){
                        min = pops[j];
                        temp = j;
                    }
                    cross = true;
                }
            }
            sum += min;
            if (!cross) {
                cout << "NO" << endl;
                break;
            }
            pops[temp] = 0;
        }
        if (cross) {
            cout << "YES \n" << sum << endl;
        }
    }
    
    else {
        cout << "NO" << endl;
    }
}