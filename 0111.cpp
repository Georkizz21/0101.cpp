#include<iostream>
#include<string>
using namespace std ;
int main(){
	int t;
	cin >> t ;
	
	while (t--){
		string x ;
		cin >> x ;
		int check=1;
		    for(int i = 1 ; i + 1 < x.length() ; i++){
		        
				if(x[i]-x[i+1] != 1 && x[i] - x[i+1] != -1 ){
					
					check = 0;break;
			 }
		 }
	
	
	check ==1 ? cout << "YES" : cout << "NO" ;
		
	
}
return 0;
}