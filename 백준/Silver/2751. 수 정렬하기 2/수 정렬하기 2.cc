#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000001] = { 0 };

int main() {
    cin.tie(NULL), ios::sync_with_stdio(false);

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}
