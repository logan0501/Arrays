#include<bits/stdc++.h>
using namespace std;
int buyAndSellStock(int arr[],int n){
	int profit=0;
	for(int i=0;i<n-1;i++){
		if(arr[i+1]>arr[i])profit+=arr[i+1]-arr[i];
	}
	return profit;
}
int main(){
	int arr[]={1,5,3,8,12};
	cout<<buyAndSellStock(arr,5);
	return 0;
}