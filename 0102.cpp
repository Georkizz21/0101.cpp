#include<iostream>
int main(){
	using namespace std;
	int x;cin>>x;
	while(x--){
		char x;cin>>x;
		if(x<97)x=x+32;
		else x=x-32;
		cout<<x<<endl;
	}
	
}