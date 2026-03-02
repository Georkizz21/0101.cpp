#include<iostream>
int main(){
	using namespace std;
	int x;cin>>x;
	while(x--){
		int n;cin>>n;
		int check=1;
		while(n>0){
			int b=n%10;
			n=n/10;
			if(b==0||b==6||b==8){
				check=1;
			}
			else {
				check=0;break;
			}
		}
		if(check)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}