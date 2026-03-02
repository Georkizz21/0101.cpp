#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int pos = -1;

        for (int i = 0; i + 2 < s.length(); i++) {
            if (s[i] == '0' && s[i+1] == '8' && s[i+2] == '4') {
                pos = i;
                break;
            }
        }

        if (pos == -1) {
            cout << s;
        }
        else {
            for (int i = 0; i < pos; i++) {
                cout << s[i];
            }
            for (int i = pos + 3; i < s.length(); i++) {
                cout << s[i];
            }
        }

        cout << endl;
    }

    return 0;
}
