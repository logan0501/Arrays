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
int maxSubarraySumEfficient(int arr[],int n){
	int maxv=arr[0],maxending=arr[0];
	for(int i=1;i<n;i++){
		maxending=max(maxending+arr[i],arr[i]);
		maxv=max(maxv,maxending);
	}
	return maxv;
}
int main(){
	int arr[]={5,8,3};	
	cout<<maxSubarraySumEfficient(arr,3);
	return 0;
}