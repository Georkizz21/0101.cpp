#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int t;
	
	cin >> t;
	while(t--){
		double a , A;
		cin >> a >> A;
		
		double b,B;
		cin >> b >> B;
		
		cout << fixed << setprecision(4) << sqrt((a-b)*(a-b)+(A-B)*(A-B)) << endl ;
		
	}
}