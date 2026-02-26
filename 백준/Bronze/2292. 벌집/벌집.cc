#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int max = 1;
    int add = 6;
    int cnt = 1;

    while (true) {
        if (n <= max) break;

        max += add;
        add += 6;
        ++cnt;
    }

    cout << cnt;

    return 0;
}