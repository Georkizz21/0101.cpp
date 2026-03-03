#include<bits/stdc++.h>
using namespace std ;

bool checkNT(int n){
	
	for(int i = 2 ; i * i <= n ; i++){
		if( n % i == 0 ) return false ; 
	} 
	return true ; 
	
}

int main(){
	
	int t ;
	cin >> t ;
	
	while(t--){
	
	int n ;
	cin >> n ;
	
	bool check = checkNT( n );
	
	for( int i = 2 ; i * i  <= n ; i++ ){
		
		int count = 0 ;
		
		if(checkNT(i) && n % i == 0){
		
			while(n%i== 0){
			
				n=n/i;
				count++;
				
			}
			cout << i <<" " << count <<" " ;
		} 
	}

	if( n > 1 ) cout << n <<" " << 1 ; 
	
	cout << endl ;
}
	return 0 ;
	
}
