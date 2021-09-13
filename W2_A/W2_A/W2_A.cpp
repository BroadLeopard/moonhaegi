#include <iostream>
#include <string>
#include <vector>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	int n, m;
	int k;

	string tmp;
	bool flag;

	cin >> t;


	while (t--) {
		flag = true;

		cin >> n >> m;

		vector <string> w;
		vector <vector<string>> s(20);
		
		for (int i = 0; i < m; i++) {
			cin >> tmp;
			w.push_back(tmp);
		}

		for (int i = 0; i < n; i++) {
			cin >> k;

			for (int j = 0; j < k; j++) {
				cin >> tmp;
				s[i].push_back(tmp);
			}
		}

		//위까지 입력 완료

		for (int i = 0; i < w.size(); i++) {
			for (int j = 0; j < n; j++) {
				if (s[j].front() == w[i]) {
					s[j].erase(s[j].begin());//벡터 맨 앞 제거 
					break;
				}

				if (j == n - 1) {
					flag = false;
				}
			}
		}

		if (flag) {
			cout << 1 << "\n";
		}
		else {
			cout << 0 << "\n";
		}

	}

	return 0;
}

