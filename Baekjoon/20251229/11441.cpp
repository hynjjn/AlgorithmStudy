#include <iostream>

using namespace std;

int arr[100001];
int dp[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		dp[i] = dp[i - 1] + arr[i];
	}

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int b, c;
		cin >> b >> c;
		cout << dp[c] - dp[b - 1] << "\n";

	}
	
	return 0;
}
