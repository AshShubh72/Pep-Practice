#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	if (!(cin >> n >> m)) return 0; // expect rows and columns

	vector<vector<long long>> a(n, vector<long long>(m));
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> a[i][j];

	for (int i = 0; i < n; ++i) {
		long long sum = 0;
		for (int j = 0; j < m; ++j) sum += a[i][j];
		cout << sum;
		if (i + 1 < n) cout << '\n';
	}

	return 0;
}

