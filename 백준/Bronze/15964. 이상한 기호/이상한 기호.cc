#include <iostream>

using namespace std;

int main() {
    cin.tie(0),ios::sync_with_stdio(0);

    int a = 0;
    int b = 0;

    cin >> a >> b;

    cout << (a + b) * (a - b) << '\n';

    return 0;
}