#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll int n;
	cin>>n;
	while(n!=1){
		cout<<n<<" ";
		if(n%2==0){
			n = n/2;
		}
		else{
			n=n*3+1;
		}
	}
	cout<<1<<endl;
	return 0;
}