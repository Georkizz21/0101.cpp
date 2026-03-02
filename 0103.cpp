#include<iostream>
#include <iomanip>
int main(){
	using namespace std;
	int x;cin>>x;
	float sum=0;
	for(int i=1;i<=x;i++){
		sum+=1.0/i;
	}
	cout<<fixed<<setprecision(4)<<sum;
}
