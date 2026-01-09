#include <iostream>
#include <queue>
#include <vector>

using namespace std;

queue<int> q;
vector<int> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
	    q.push(i + 1);
	}

    int iter = 1;
	while (!q.empty()) {
		int tmp;

		if(iter % k == 0) {
            tmp = q.front();
    		v.push_back(tmp);
    		q.pop();
            iter = 1;
		} else {
    		tmp = q.front();
    		q.pop();
    		q.push(tmp);
            iter++;
		}
	}

	cout << "<";
	for (int i = 0; i < v.size(); i++) {
	    if(i + 1 == v.size()) {
			cout << v[i] << ">\n";
		} else {
		    cout << v[i] << ", ";
		}
	}

	return 0;
}
