#include <iostream>
using namespace std ;

int main (){
	int t;
	cin >> t;
	
	while (t--){
		int n;
		cin >> n ;
		int k=n;
		for(int i = 2 ; i*i <= k; i++ ){
			int num=0 ;
			while ( n% i == 0 ){
				num++;
				n=n/i;
			}
			if (num >=1)cout << i << " " << num << " " ;
		}
		
		if(n>1  )cout << n << " " << 1 << " "<< endl;
		else cout << endl;
	}
}