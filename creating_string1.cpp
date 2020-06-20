#include<bits/stdc++.h>
using namespace std;

vector<string>arr1;

void permute(char *arr, int l, int r){
	if(l==r){
		arr1.push_back(arr);
		return;
	}
	for(int i=l;i<=r;i++){
		swap(arr[l],arr[i]); //Fixing 0ne character and swapping it;
		permute(arr,l+1,r); // Fixing one character and finding the permuation for others;
		swap(arr[l],arr[i]); // Rearranging the string again
	}
}


int main(){
	char *arr = new char[8];
	cin>>arr;
	int l = strlen(arr);
	permute(arr,0,l-1);
	sort(arr1.begin(),arr1.end());
	arr1.push_back("0");
	vector<string>arr2;
	for(int i=0;i<arr1.size()-1;i++){
		if(arr1[i]!=arr1[i+1])
			arr2.push_back(arr1[i]);
	}
	cout<<(arr2.size())<<endl;
	for(int i=0;i<arr2.size();i++)
		cout<<arr2[i]<<endl;

}