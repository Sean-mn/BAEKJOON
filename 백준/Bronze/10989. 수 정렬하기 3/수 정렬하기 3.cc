#include <iostream>
#include <map>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    for (auto& p : cnt) {
        for (int i = 0; i < p.second; i++) {
            cout << p.first << '\n';
        }
    }

    return 0;
}