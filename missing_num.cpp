#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll int n;
	cin>>n;
	ll int *arr = new ll int[n-1];
	for(ll int i=0;i<n-1;i++)
		cin>>arr[i];
	sort(arr,arr+n-1);
	for(ll int i=1;i<n;i++){
		if(arr[i-1]!=i)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	if(arr[0]==1)
		cout<<n<<endl;
	else
		cout<<1<<endl;
}