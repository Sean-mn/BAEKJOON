#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 0;
    int r = 0;
    string s;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> r >> s;

        for (int j = 0; j < s.length(); j++) {
            for (int k = 0; k < r; k++) {
                cout << s[j];
            }
        }
        cout << "\n";
    }

    return 0;
}