#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	lli n;
	cin>>n;
	lli *arr = new lli[n];
	if(n==4)
	{
			cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
			return 0;
	}
	lli cnt = 1;
	for(lli i=0;i<n;i++){
		if(i%2==0)
			arr[i] = cnt++;
	}
	for(lli i=1;i<n;i++){
		if(i%2!=0)
			arr[i] = cnt++;
	}
	for(lli i=1;i<n;i++){
		if(abs(arr[i-1]-arr[i])==1){
			cout<<"NO SOLUTION"<<endl;
			return 0;
		}
	}
	for(lli i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
		
}