#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int n){
	int j=0;
	for(int i=1;i<n;i++){
		if(arr[j]!=arr[i]){
			arr[++j]=arr[i];
			
		}
	}
	return j+1;
}
int main(){
	int arr[]={1,2,2,3,3,3,3};
	cout<<removeDuplicates(arr,6);
	return 0;
}