#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(int arr[],int n){
	int res=0,maxv=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1)res++;
		else{
			maxv=max(maxv,res);
			res=0;
		}
	}
	return maxv;
}
int main(){
	int arr[]={0,0,0,0};
	cout<<maxConsecutiveOnes(arr,8);
	return 0;
}