#include <iostream>

using namespace std;

int main() {
    long long int n, q, val[2], i, j, sum = 0;
    cin >> n;
    long long int arr[n];
    for (i = 0; i < n; i ++) {
        cin >> arr[i];
    }
    cin >> q;
    long long int ans[q];
    for (i = 0; i < q; i ++) {
        sum = 0;
        cin >> val[0] >> val[1];
        for (j = val[0] - 1; j < val[1]; j ++) {
            sum += arr[j];
        }
        ans[i] = sum;
    }

    for (i = 0; i < q; i ++) {
        cout << ans[i] << endl;
    }


}