#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL),ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> v;
    while (n--) {
        string input;
        cin >> input;

        if (input == "push") {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if (input == "pop") {
            if (v.empty())
                cout << -1 << '\n';
            else {
                cout << v.back() << '\n';
                v.pop_back();
            }
        }
        else if (input == "size") {
            cout << v.size() << '\n';
        }
        else if (input == "empty") {
            cout << (v.empty() ? 1 : 0) << '\n';
        }
        else if (input == "top") {
            if (v.empty())
                cout << -1 << '\n';
            else
                cout << v.back() << '\n';
        }
    }

    return 0;
}