#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    int basket[101];
    for (int i = 0; i < n; i++){
        basket[i] = i+1;
    }
    
    while (m--){
        int i, j;
        cin >> i >> j;
        swap(basket[i-1], basket[j-1]);
    }
    
    for (int i = 0; i < n; i++){
        cout << basket[i] << " ";
    }
    
    return 0;
}