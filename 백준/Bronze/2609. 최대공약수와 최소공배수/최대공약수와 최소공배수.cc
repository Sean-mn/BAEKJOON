#include <iostream>

using namespace std;

int getGcd(int a, int b);
int getLcm(int a, int b);

int main() {
	int a, b;

	cin >> a >> b;

	int gcd = getGcd(a, b);
	int lcm = getLcm(a, b);

	cout << gcd << "\n";
	cout << lcm;
}

int getGcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	
	return getGcd(b, a % b);
}

int getLcm(int a, int b) {
	return (a * b) / getGcd(a, b);
}