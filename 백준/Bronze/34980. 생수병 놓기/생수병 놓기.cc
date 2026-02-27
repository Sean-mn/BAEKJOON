#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0),ios::sync_with_stdio(0);

    int n;
    cin >> n;

    string before, after;
    cin >> before >> after;

    int before_cnt = 0;
    int after_cnt = 0;

    for (int i = 0; i < n; i++) {
        if (before[i] == 'w') before_cnt++;
        if (after[i] == 'w') after_cnt++;
    }

    if (after_cnt < before_cnt) {
        cout << "Oryang";
    }
    else if (after_cnt > before_cnt) {
        cout << "Manners maketh man";
    }
    else {
        if (before == after)
            cout << "Good";
        else
            cout << "Its fine";
    }

    return 0;
}