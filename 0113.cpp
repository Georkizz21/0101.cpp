#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string z;
        cin >> z;

        if (z.length() >= 2 &&
            z[z.length() - 2] == '8' &&
            z[z.length() - 1] == '6') {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}
