#include<bits/stdc++.h>
using namespace std;
void moveToEnd(int arr[],int n){
	int i=0;
	for(int j=0;j<n;j++){
		if(arr[j]!=0){
			swap(arr[i++],arr[j]);
		}
	}
}
int main(){
	int arr[]={8,5,0,10,0,20};
	moveToEnd(arr,6);
	for(int a:arr)cout<<a<<endl;
	return 0;
}