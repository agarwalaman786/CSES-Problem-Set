#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main(){
	ll int n;
	cin>>n;
	ll int *arr = new ll int[n];
	map<ll int, ll int>mp;
	for(ll int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	map<ll int, ll int>:: iterator it;
	ll int cnt = 0;
	for(auto it=mp.begin();it!=mp.end();it++)
		cnt++;
	cout<<cnt<<endl;
	return 0;
}