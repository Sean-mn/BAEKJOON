#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string sa = to_string(a);
    string sb = to_string(b);
    
    string r1 = sa + sb;
    string r2 = sb + sa;
    
    return stoi(r1) >= stoi(r2) ?
        stoi(r1) :stoi(r2);
}