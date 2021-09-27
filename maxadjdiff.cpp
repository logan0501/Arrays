#include<bits/stdc++.h>
using namespace std;
int minAdjDiff(int arr[], int n){    
     int res=abs(arr[0]-arr[1]);
     for(int i=1;i<n;i++){
     	int index = (i+1)%n;
     	int diff = abs(arr[i]-arr[index]);
     	res=min(res,diff);
     }
     return res;
        
}
int main(){
	int arr[] = {10,-3,-4,7,6,5,-4,-1};
	cout<<minAdjDiff(arr,8)<<endl;
	return 0;
}