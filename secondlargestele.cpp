#include<bits/stdc++.h>
using namespace std;
int secondLargestEle(int arr[],int n){
	int res=-1,largest=0;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[largest]){
			res=largest;
			largest=i;
		}
		if(arr[i]!=arr[largest]){
			if(res==-1 || arr[res]<arr[i])res=i;
		}
	}
	return res;
}
int main(){
	int arr[]={1,2,3,5,0};
	cout<<secondLargestEle(arr,5);
	return 0;
}