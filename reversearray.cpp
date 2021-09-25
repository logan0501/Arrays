#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int n){
	int low=0,high=n-1;
	while(low<high)swap(arr[low++],arr[high--]);
}
int main(){
	int arr[]={1,2,3,4,5,6};
	reversearray(arr,6);
	for(int a:arr)cout<<a<<endl;
	return 0;
}