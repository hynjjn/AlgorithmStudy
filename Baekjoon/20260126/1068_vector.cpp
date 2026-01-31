#include <iostream>
#include <vector>

using namespace std;

int n, k, root;
int leaf = 0;
vector<int> tree[51];

int traversal(int node) {
    if (node == k) return -1; // completed node

    if (tree[node].empty()) { // if a node is a leaf, increment and return
        leaf++;
        return 0;
    }

    for (int i = 0; i < tree[node].size(); i++) {
        int tmp = traversal(tree[node][i]);
        if (tmp == -1 && tree[node].size() == 1) leaf++;
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    // get some inputs. input value = parent node
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t == -1) root = i;
        else tree[t].push_back(i);
    }

    cin >> k; // which node to cut? 

    // scaffold
    if (root != k) {
        traversal(root);
    }

    cout << leaf << '\n';
    return 0;
}
