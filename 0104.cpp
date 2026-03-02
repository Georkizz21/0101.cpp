#include<iostream>
#include <iomanip>
int main(){
	using namespace std;
	int x;cin>>x;
	long long sum=0;
	long long aduu=1;
	for(int i=1;i<=x;i++){
		aduu*=i;
		sum+=aduu;
	}
	cout<<sum;
}