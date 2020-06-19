//Very Important question not solved through the DP

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	ll int n;
	cin>>n;
	ll int sum=(n*(n+1)/2);

	if(sum%2==0){
		sum = sum/2;
		vector<ll int>arr1,arr2;
		ll int temp = n;
		cout<<"YES"<<endl;
		while(sum){
			if(sum-n>=0){
				sum = sum - n;
				arr1.push_back(n);
			}
			else
				arr2.push_back(n);
			n--;
		}

		if((arr1.size()+arr2.size())<temp){
			for(ll int i=1;i<=n;i++)
				arr2.push_back(i);
		}

		cout<<arr1.size()<<endl;
		for(ll int i=0;i<arr1.size();i++)
			cout<<arr1[i]<<" ";
		cout<<endl;
		if(arr2.size())
		cout<<arr2.size()<<endl;
		for(ll int i=0;i<arr2.size();i++)
			cout<<arr2[i]<<" ";
	}
	else
		cout<<"NO"<<endl;
	return 0;
}