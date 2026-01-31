#include <iostream>
#include <vector>

using namespace std;

int input[1024];
vector<int> arr[10];
int k;

void tree(int depth, int start, int end) {
    if (start > end) return;
    
    int mid = (start + end) / 2;
    arr[depth].push_back(input[mid]);
    
    tree(depth + 1, start, mid - 1);
    tree(depth + 1, mid + 1, end);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> k;
    int total = (1 << k) - 1; // equivalent to pow(2, k) - 1. bitwise equation is preferred when calculating exponents with base 2.

    for (int i = 0; i < total; i++) {
        cin >> input[i];
    }

    tree(0, 0, total - 1);

    for (int i = 0; i < k; i++) {
        for (int j : arr[i]) cout << j << ' ';
        cout << '\n';
    }

    return 0;
}