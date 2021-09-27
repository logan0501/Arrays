#include<bits/stdc++.h>
using namespace std;
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= -1;
	for(int i=0;i<sizeOfArray;i++){
		if(arr[i]>max){
			max2=max;
			max=arr[i];
		}
		else if(arr[i]!=max){
			if(max2==-1 || arr[i]>max2){
				max2=arr[i];
			}
		}
	}        
	cout<<max<<max2<<endl;
         
 }
int main(){
	int arr[] = {1,2,3,4,5};
	largestAndSecondLargest(5,arr);
	return 0;
}