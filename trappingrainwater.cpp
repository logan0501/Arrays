#include<bits/stdc++.h>
using namespace std;
int getWater1(int arr[],int n){
	int quantity=0;
	for(int i=1;i<n-1;i++){
		int lmax=arr[i];
		for(int j=0;j<i;j++){
			lmax=max(lmax,arr[j]);
		}
		int rmax=arr[i];
		for(int j=i+1;j<n;j++)
			rmax=max(rmax,arr[j]);
		quantity+=min(lmax,rmax)-arr[i];
	}
	return quantity;
}
int getWater2(int arr[],int n){
	int lmax[n],rmax[n];
	int quantity=0;
	lmax[0]=arr[0];
	rmax[n-1]=arr[n-1];
	for(int i=1;i<n;i++){
		lmax[i]=max(lmax[i-1],arr[i]);
		rmax[n-i-1]=max(rmax[n-i],arr[n-i-1]);
	}
	for(int i=1;i<n-1;i++){
		quantity+=min(lmax[i],rmax[i])-arr[i];
	}
	
	return quantity;
}
int main(){
	int arr[]={3,0,1,2,5};
	// cout<<getWater(arr,5);
	cout<<getWater2(arr,5);
	return 0;
}