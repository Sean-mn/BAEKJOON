#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    string words;
    int count = 0;

    getline(cin, s);

    stringstream ss(s);
    while (ss >> words) {
        count++;
    }
    cout << count << "\n";

    return 0;
}