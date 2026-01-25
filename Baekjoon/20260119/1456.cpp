#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;

const int MAX = 10000000;
bool not_prime[MAX + 1];

void erathos() {
    not_prime[0] = not_prime[1] = true;
    for (ll i = 2; i * i <= MAX; i++) {
        if (not_prime[i]) continue;
        for (ll j = i * i; j <= MAX; j += i) {
            not_prime[j] = true;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll A, B;
    cin >> A >> B;

    erathos();

    ll count = 0;

    for (ll i = 2; i <= MAX; i++) {
        if (!not_prime[i]) {
            ll temp = i;

            while (temp <= B / i) {
                temp *= i;
                if (temp >= A) {
                    count++;
                }
            }
        }
    }

    cout << count << '\n';
    return 0;
}