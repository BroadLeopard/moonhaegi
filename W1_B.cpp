#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	int q;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		int x;
		int small = 1001;
		int big = 0;

		stack<int> bigSta;
		stack<int> smaSta;

		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> q;

			if (q == 1) {//»ðÀÔ
				cin >> x;

				if (smaSta.empty()) {
					smaSta.push(x);
					bigSta.push(x);
				}
				else {
					if (smaSta.top() > x) {
						smaSta.push(x);
					}
					else {
						smaSta.push(smaSta.top());
					}

					if (bigSta.top() > x) {
						bigSta.push(bigSta.top());
					}
					else {
						bigSta.push(x);
					}
				}

				cout << smaSta.top() << " " << bigSta.top() << "\n";
			}
			else {//»èÁ¦
				if (!smaSta.empty()) {
					smaSta.pop();
					bigSta.pop();
				}
			}
		}
	}

	return 0;
}