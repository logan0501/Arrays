#include<bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/window-sliding-technique/

int maxKConsecutiveSum(int arr[],int n,int k){
	int maxv=0;
	for(int i=0;i<n-k+1;i++){
		int sum=0;
		for(int j=0;j<k;j++){
			sum+=arr[i+j];
		}
		maxv=max(maxv,sum);
	}
	return maxv;
}

int maxKConsecutiveSumSW(int arr[],int n,int k){
	int curr_max=0;
	for(int i=0;i<k;i++)curr_max+=arr[i];
	int maxv=curr_max;
	for(int i=k;i<n;i++){
		curr_max+=(arr[i]-arr[i-k]);
		maxv=max(maxv,curr_max);
	}
	return maxv;
}
int main(){
	int arr[]={1,8,30,-5,20,7};
	cout<<maxKConsecutiveSumSW(arr,6,3);
	return 0;
}