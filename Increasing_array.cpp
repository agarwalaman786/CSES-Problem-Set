#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll int n;
	cin>>n;
	ll int *arr = new ll int[n];
	for(ll int i=0;i<n;i++)
		cin>>arr[i];
	ll int cnt = 0;
	for(ll int i=1;i<n;i++){
		if(arr[i-1]>arr[i]){
			cnt+=abs(arr[i-1]-arr[i]);
			arr[i]+=abs(arr[i-1]-arr[i]);
		}
	}
	cout<<cnt<<endl;
}