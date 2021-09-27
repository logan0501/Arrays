#include<bits/stdc++.h>
using namespace std;
void maximumAdjacent(int sizeOfArray, int arr[]){
    for(int i=1;i<sizeOfArray;i++){
    	cout<<max(arr[i-1],arr[i])<<" ";
    }
      
}
int main(){
	int arr[] = {5,5};
	maximumAdjacent(2,arr);	
	return 0;
}