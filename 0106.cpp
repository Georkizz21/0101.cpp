#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int a[20];
        int len = 0;

        if (n == 0) {
            a[len++] = 0;
        }

        while (n > 0) {
            a[len++] = n % 10;
            n /= 10;
        }

        int ok = 1;
        for (int i = 0; i < len / 2; i++) {
            if (a[i] != a[len - 1 - i]) {
                ok = 0;
                break;
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
}