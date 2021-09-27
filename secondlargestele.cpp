#include<bits/stdc++.h>
using namespace std;
vector<int> secondLargestEle(int arr[],int n){
	int res=-1,largest=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>largest){
			res=largest;
			largest=arr[i];
		}
		if(arr[i]!=largest){
			if(res<arr[i])res=arr[i];
		}
		
	}
	return vector<int>{largest,res};
}
int main(){
	int arr[]={2,1,2};
	vector<int> v =secondLargestEle(arr,3);
	for(auto a:v)cout<<a<<endl;
	return 0;
}