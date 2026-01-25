#include <iostream>
#include <cmath>
#include <string> 

using namespace std;

const int MAX = 1100000; 
bool not_prime[MAX + 1];

bool isPalindrome(int n) {
    string s = to_string(n);
    int len = s.length();
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - 1 - i]) return false;
    }
    return true;
}

void erathos() {
    not_prime[0] = 1;
    not_prime[1] = 1;

    for (int i = 2; i <= sqrt(MAX); i++) {
        if (not_prime[i]) continue;
        for (int j = i * i; j <= MAX; j += i) 
            not_prime[j] = 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int M;
    cin >> M;

    erathos();
    for (int i = M; i <= MAX; i++) {
        if (!not_prime[i] && isPalindrome(i)) {
            cout << i << "\n";
            return 0; 
        }
    }

    return 0;
}