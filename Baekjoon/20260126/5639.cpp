#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

void traversal(int start, int end) {
    if (start >= end) return;
    
    int idx = start + 1;
    while (idx < end) {
        if (v[start] < v[idx]) break;
        idx++;
    }

    traversal(start + 1, idx);
    traversal(idx, end);
    cout << v[start] << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int input;
    while (cin >> input) {
        v.push_back(input);
    }

    traversal(0, v.size());
    return 0;
}
