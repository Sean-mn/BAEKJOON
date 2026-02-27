#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0),ios::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }

    bool sumi = false;

    for (int K = 1; K <= n / 2; K++) {
        bool same = true;

        for (int i = 0; i < K; i++) {
            if (l[i] != l[n - K + i]) {
                same = false;
                break;
            }
        }

        if (same) {
            sumi = true;
            break;
        }
    }

    if (sumi) cout << "yes\n";
    else cout << "no\n";

    return 0;
}