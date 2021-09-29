#include<bits/stdc++.h>
using namespace std;
void minGroupFlip(int arr[],int n){
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[0]){
			if(arr[i]!=arr[i-1])cout<<" From "<<i;
		else
			cout<<" To "<<i<<endl;
		}
	}
	if(arr[n-1]!=arr[0])cout<<n-1;
}
int main(){
	int arr[]={1,0,0,1,1,0,0,1};
	minGroupFlip(arr,8);
	return 0;
}