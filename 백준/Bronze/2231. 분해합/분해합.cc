#include <iostream>

#define endl '\n'
using namespace std;

int main() {
    cin.tie(0),ios::sync_with_stdio(0);

    int n;
    cin >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
        int num = i;
        int sum = i;

        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }

        if (sum == n) {
            answer = i;
            break;
        }
    }

    cout << answer << endl;
    
    return 0;
}