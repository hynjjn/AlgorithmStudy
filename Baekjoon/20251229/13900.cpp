#include <iostream>

using namespace std;

long long arr[100001];
long long sum[100001];
long long res = 0;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		sum[i] = sum[i - 1] + arr[i];
	}

	for (int i = 1; i < n; i++) {
		res += arr[i] * (sum[n] - sum[i]);
	}
	cout << res << '\n';

	return 0;
}
