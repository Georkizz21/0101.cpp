#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;

    char d101[15] = {
        'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'
    };
    char d102[15] = {
        'A','C','C','A','B','C','D','D','B','B','C','D','D','B'
    };

    while (T--) {
        int code;
        cin >> code;

        int correct = 0;
        for (int i = 0; i < 15; i++) {
            char x;
            cin >> x;
            if (code == 101 && x == d101[i]) correct++;
            if (code == 102 && x == d102[i]) correct++;
        }

        double score = correct * 10.0 / 15.0;
        cout << fixed << setprecision(2) << score << '\n';
    }

    return 0;
}
