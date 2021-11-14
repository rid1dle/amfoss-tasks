#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, i, count = 0, k = 0, max = 0, count2 = 0;
    cin >> n;
    int arr[n], asize = sizeof(arr)/sizeof(arr[0]), arr2[n];

    for (i = 0; i < n; i ++) {
        cin >> arr[i];
    }

    sort(arr, arr + asize);

    for (i = 0; i < n; i ++) {
        if (arr[i] == arr[i + 1]) {
            count ++;
            // cout << count << endl;
        }
        else {
            count ++;
            count2 ++;
            if (count > max) {
                max = count;
            }
            count = 0;
            k ++;
        }
    }

    cout << max << " " << count2 << endl;


}