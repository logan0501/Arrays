#include<bits/stdc++.h>
using namespace std;
void leftRotateby1(int arr[],int n){

	int temp=arr[0];
		for(int j=0;j<n-1;j++){
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;


}
void leftRotatebyd1(int arr[],int n,int d){
	for(int i=0;i<d;i++){
		int temp=arr[0];
		for(int j=0;j<n-1;j++){
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	// leftRotateby1(arr,5);
	leftRotatebyd1(arr,5,1);
	for(int a:arr)cout<<a<<endl;
	return 0;
}