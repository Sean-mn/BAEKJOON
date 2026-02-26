#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<double> score(n);
    for (int i = 0; i < n; i++) {
        cin >> score[i];
    }

    sort(score.begin(), score.end(), greater<double>());

    int m = score[0];
    double sum = 0;

    for (int i = 0; i < n; i++) {
        score[i] = score[i] / m * 100;
        sum += score[i];
    }

    cout << fixed << setprecision(2);
    cout << sum / n;

    return 0;
}