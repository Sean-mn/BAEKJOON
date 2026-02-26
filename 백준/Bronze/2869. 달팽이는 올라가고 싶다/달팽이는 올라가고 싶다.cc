#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL),ios::sync_with_stdio(false);

    int a, b, v;
    cin >> a >> b >> v;

    int day = (v - a) / (a - b);

    if ((v - a) % (a - b) != 0)
        day++;

    cout << day + 1 << '\n';

    return 0;
}