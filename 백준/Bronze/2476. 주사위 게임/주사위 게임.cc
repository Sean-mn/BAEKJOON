#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 0;
    int a1, a2, a3;
    int sum[1000];
    int max = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a1 >> a2 >> a3;

        if (a1 == a2 && a1 == a3 && a2 == a3) {
            sum[i] = 10000 + a1 * 1000;
        }
        else if (a1 == a2 || a1 == a3) {
            sum[i] = 1000 + a1 * 100;
        }
        else if (a2 == a3) {
            sum[i] = 1000 + a2 * 100;
        }
        else {
            if (a1 > a2 && a1 > a3) {
                sum[i] = a1 * 100;
            }
            else if (a2 > a1 && a2 > a3) {
                sum[i] = a2 * 100;
            }
            else if (a3 > a1 && a3 > a2){
                sum[i] = a3 * 100;
            }
        }
        if (sum[i] > max) {
            max = sum[i];
        }
    }
    cout << max << "\n";

    return 0;
}