#include <bits/stdc++.h>
using namespace std;

int main() {
	double sum = 0;
	for(int i = 0;;i++) {
		double term = 1.0/(2*i+1);
		if (i % 2 == 0) sum += term;
		else sum -= term;
		if (term < 1e-6) break;
	}
	cout << fixed << setprecision(6) << sum * 4 << endl;
}
