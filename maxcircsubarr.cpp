#include<bits/stdc++.h>
using namespace std;
int maxCircularSubarraySum(int arr[],int n){
	int res=arr[0];
	for(int i=0;i<n;i++){
		int sum=arr[i],max_sum=arr[i];
		for(int j=1;j<n;j++){
			int index = (i+j)%n;
			sum+=arr[index];
			max_sum=max(max_sum,sum);
		}
		res=max(res,max_sum);
	}
	return res;
}

int main(){
	int arr[]={8,-4,3,-5,4};
	cout<<maxCircularSubarraySum(arr,5);
	return 0;
}