#include<bits/stdc++.h>
using namespace std;
void reverseInGroups(vector<long long>& arr, int n, int k){
     for(int i=0;i<n;i+=k){
     	int left=i;
     	int right = min(i+k-1,n-1);
     	while(left<right)swap(arr[left++],arr[right--]);
     }
}
int main(){
	vector<long long> arr={1,2,3,4,5};
	reverseInGroups(arr,arr.size(),3);	
	for(auto a:arr)cout<<a<<endl;
	return 0;
}