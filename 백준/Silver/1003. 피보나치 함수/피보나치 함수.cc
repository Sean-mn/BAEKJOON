#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0),ios::sync_with_stdio(0);

    int t;
    cin >> t;
    
    vector<int> v(41);
    v[0] = 0;
    v[1] = 1;

    for (int i = 2; i <= 40; i++) {
        v[i] = v[i - 1] + v[i - 2];
    }

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        if (n == 0)
            cout << "1 0\n";
        else if (n == 1)
            cout << "0 1\n";
        else
            cout << v[n - 1] << " " << v[n] << "\n";
    }

    return 0;
}