#include<bits/stdc++.h>
using namespace std;
void frequencySortedArray(int arr[],int n){
	int i=1;
	int count;
	while(i<n){
		count=1;
		while(i<n && arr[i]==arr[i-1]){
			i++;
			count++;
		}
		cout<<arr[i-1]<<" "<<count<<endl;
		i++;
	}
	
}
int main(){
	int arr1[]={4,5,5,6};
	frequencySortedArray(arr1,4 );
	return 0;
}