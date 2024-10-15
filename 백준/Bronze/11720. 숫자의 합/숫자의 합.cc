#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string sum;
    int result = 0;

    cin >> N;
    cin >> sum;

    for (int i = 0; i < N; i++) {
        result += sum[i] - '0';
    }
    cout << result;

    return 0;
}