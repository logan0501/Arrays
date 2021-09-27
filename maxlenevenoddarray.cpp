#include<bits/stdc++.h>
using namespace std;
int maxEvenOdd(int arr[],int n){
	int res=0,curr=1;
	for(int i=0;i<n-1;i++){
		if((arr[i]+arr[i+1])%2){
			curr++;
			res=max(res,curr);
		}else{
			
			curr=1;
		}
	}
	return res;
}
int main(){
	int arr[]={5,10,20,6,3,8};
	cout<<maxEvenOdd(arr,6);
	return 0;
}