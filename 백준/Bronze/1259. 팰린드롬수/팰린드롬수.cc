#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL),ios::sync_with_stdio(false);

    while (true) {
        string n;
        cin >> n;

        if (n == "0") break;

        int i = 0;
        int j = n.size() - 1;

        bool result = false;

        if (n.size() == 1) {
            cout << "yes" << endl;
            continue;
        }

        for (i = 0; i < n.size() / 2; i++) {
            if (n[i] == n[j]) {
                --j;
                result = true;
            }
            else {
                result = false;
                break;
            }
        }

        if (result)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}