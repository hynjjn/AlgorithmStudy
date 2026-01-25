// reference: 1934 (gcd, lcm)
#include <iostream>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a, b;
    cin >> a >> b;

    ll g = gcd(a, b);

    for (ll i = 0; i < g; i++) {
        cout << "1";
    }
    cout << '\n';
    return 0;
}