#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    cin.tie(NULL),ios::sync_with_stdio(false);

    int n;
    cin >> n;

    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int>> right;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        if (left.empty() || m <= left.top())
            left.push(m);
        else
            right.push(m);

        if (left.size() < right.size()) {
            left.push(right.top());
            right.pop();
        }
        else if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        }

        cout << left.top() << '\n';
    }

    return 0;
}