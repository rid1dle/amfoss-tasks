#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int t, n, m, v , k, i, sum = 0, sum2 = 0;
    cin >> t;
    for (long long int j = 0; j < t; j ++) {
        sum = 0;
        sum2 = 0;
        cin >> n >> m >> v >> k;
        long long int arr[m], a[m][2];
        for (i = 0; i < m; i ++) {
            cin >> arr[i];
        }
        sort(arr , arr + m);

        for (i = 0; i < m; i ++) {
            a[i][0] = a[i][1] = arr[i];
        }

        for (i = 0; i < m; i ++) {
            a[i][1] += k * v;
            a[i][0] -= k * v;
            if (a[i][1] > n) {
                a[i][1] = n;
            }
            if (a[i][0] < 1) {
                a[i][0] = 1;
            }
            sum2 += (a[i][1] - a[i][0]) + 1;
            if (i > 0 && a[i - 1][1] >= a[i][0]) {
                sum += (a[i - 1][1] - a[i][0]) + 1; 
            }
        }
        
        cout << n - (sum2 - sum) << endl;
    }
}