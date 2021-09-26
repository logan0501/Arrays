#include<bits/stdc++.h>
using namespace std;
void leadersInArray(int arr[],int n){
	int leader = arr[n-1];
	cout<<leader<<endl;
	for(int i=n-2;i>=0;i--){
		if(arr[i]>leader){
			cout<<arr[i]<<endl;
			leader=arr[i];
		}
	}
}
void leaderInArray1(int arr[],int n){
	for(int i=0;i<n;i++){
		bool leader=true;
		for(int j=i+1;j<n;j++){
			if(arr[j]>=arr[i]){
				leader=false;
				break;
			}
		}
		if(leader)cout<<arr[i]<<endl;
	}
}
int main(){
	int arr[]={7,10,4,10,6,5,2};
	leaderInArray1(arr,7);
	return 0;
}