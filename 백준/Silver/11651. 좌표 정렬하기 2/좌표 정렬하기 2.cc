#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> &a, pair<int, int> &b) {
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main() {
    cin.tie(0),ios::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        v.push_back(pair<int, int>(x, y));
    }

    sort(v.begin(), v.end(), comp);

    for (auto& s : v) {
        cout << s.first << " " << s.second << '\n';
    }

    return 0;
}