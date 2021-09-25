#include<bits/stdc++.h>
using namespace std;
bool isSortedArray(int arr[],int n){
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])return false;
	}
	return true;
}
int main(){
	int arr[]={1,2,3,4,5};
	int arr1[]={1,5,3};
	cout<<isSortedArray(arr,5)<<endl;
	cout<<isSortedArray(arr1,3)<<endl;
	return 0;
}