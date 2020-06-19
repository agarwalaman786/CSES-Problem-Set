#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll int solve(string s, int l){
	if(l<=1)
		return l;
	ll int cnt = 1;
	ll int mx = 1;
	for(ll int i=1;i<l;i++){
		if(s[i]==s[i-1]){
			cnt++;
		}
		else{
			mx = max(mx,cnt);
			cnt = 1;
		}
	}
	mx = max(mx,cnt);
	return mx;
}


int main(){
	string s;
	cin>>s;
	cout<<solve(s,s.length());
}