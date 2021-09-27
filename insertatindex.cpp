#include<bits/stdc++.h>
using namespace std;
void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
{
for(int i=sizeOfArray-1;i>index;i--){
	arr[i]=arr[i-1];
}      
        arr[index]=element;
      for(int i=0;i<sizeOfArray;i++)cout<<arr[i]<<endl;
        
}

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	insertAtIndex(arr,6,3,90);
	for(int a:arr)cout<<a<<endl;
	return 0;
}