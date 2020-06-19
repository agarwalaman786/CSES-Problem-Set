#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	string s;
	cin>>s;
	int arr[26]={0};
	for(int i=0;i<s.length();i++)
		arr[s[i]-'A']++;
	if(s.length()%2==0)
	{
		for(int i=0;i<26;i++)
			if(arr[i]%2!=0)
			{
				cout<<"NO SOLUTION"<<endl;
				return 0;
			}
		for(int i=0;i<26;i++){
			if(arr[i]!=0){
				int num = arr[i]/2;
				for(int j=0;j<num;j++)
					cout<<char(i+'A');
				arr[i] = arr[i]/2;
			}
		}
		for(int i=25;i>=0;i--){
			if(arr[i]!=0){
				int num = arr[i];
				for(int j=0;j<num;j++)
					cout<<char(i+'A');
			}
		}
	}
	else{
		int flag = 0;
		for(int i=0;i<26;i++)
			if(arr[i]%2!=0)
				flag++;
		if(flag>1)
		{
			cout<<"NO SOLUTION"<<endl;
			return 0;
		}
		int odd=0;
		for(int i=0;i<26;i++){
			if(arr[i]%2==0 && arr[i]!=0){
				int num = arr[i]/2;
				for(int j=0;j<num;j++)
					cout<<char(i+'A');
				arr[i] = arr[i]/2;
			}
			else{
				if(arr[i]%2!=0){
				odd = i;
				arr[i]--;
				if(arr[i]!=0){
					int num = arr[i]/2;
					for(int j=0;j<num;j++)
						cout<<char(i+'A');
					arr[i] = arr[i]/2;
				}
			}
			}
		}
		//cout<<odd<<endl;

		cout<<char(odd+'A');
		for(int i=25;i>=0;i--){
			if(arr[i]!=0){
				int num = arr[i];
				for(int j=0;j<num;j++)
					cout<<char(i+'A');
			}
		}
	}
	return 0;
}