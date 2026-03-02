#include <iostream>
#include <cmath>
using namespace std;

int can_bang(int x){
    int even = 0, odd = 0;
    while (x > 0){
        int b = x % 10;
        x /= 10;
        b % 2 == 0 ? even++ : odd++;
    }
    return even == odd;
}

int main(){
    int n;
    cin >> n;

    int k = (int)pow(10, n);
    int space=0;

    for (int i = (int)pow(10,n-1); i < k; i++){
        if (can_bang(i)){
            cout << i << " ";
            space++;
        }
        if(space==10){
        	cout<<endl;
        	space=0;
		}
    }

    return 0;
}
