#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[],int n){
	int sum,maxv=INT_MIN;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			maxv=max(sum,maxv);
		}
	}
	return maxv;
}
int main(){
	int arr[]={5,8,3};	
	cout<<maxSubarraySum(arr,3);
	return 0;
}