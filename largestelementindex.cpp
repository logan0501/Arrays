#include<bits/stdc++.h>
using namespace std;
int getLargest(int arr[],int n){
	int idx=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[idx])idx=i;
	}
	return idx;
}
int main(){
	int arr[]={1,2,3,4,5};
	cout<<getLargest(arr,5);
	return 0;
}