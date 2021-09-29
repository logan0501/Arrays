#include<bits/stdc++.h>
using namespace std;
int majorityElement(int arr[],int n){
	for(int i=0;i<n;i++){
		int count=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j])count++;
		}
		
		if(count>(n/2))return i;
	}
	return -1;
}
int majorityElementVotingAlgo(int arr[],int n){
	int res=0,count=1;
	for(int i=1;i<n;i++){
		if(arr[res]==arr[i])count++;
		else count--;
		if(count==0){count=1;res=i;}
	}
	count=0;
	for(int i=0;i<n;i++){
		if(arr[res]==arr[i])count++;
	}
	if(count>n/2)return res;
	else return -1;

}
int main(){
	int arr[]={1,2,2,2,3};
	cout<<majorityElementVotingAlgo(arr,5);
	return 0;
}