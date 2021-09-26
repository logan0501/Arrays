#include<bits/stdc++.h>
using namespace std;
int maxdifference(int arr[],int n){
	int maxv=arr[1]-arr[0];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			maxv=max(maxv,arr[j]-arr[i]);
		}
	}
	return maxv;
}
int maxDiff(int arr[],int n){
	int diff=arr[1]-arr[0],minv=arr[0];
	for(int j=1;j<n;j++){
		diff=max(diff,arr[j]-minv);
		minv=min(minv,arr[j]);
	}
	return diff;
}
int main(){
	int arr[]={30,10,8,2};
	cout<<maxdifference(arr,4)<<endl;
	cout<<maxDiff(arr,4);
	return 0;
}