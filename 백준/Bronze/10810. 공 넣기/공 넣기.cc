#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    int basket[101] = {0};
    
    while(m--) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int idx = i-1; idx < j; idx++) {
            basket[idx] = k;
        }
    }

    for (int idx = 0; idx < n; idx++) {
        cout << basket[idx] << " ";
    }
    
    return 0;
}