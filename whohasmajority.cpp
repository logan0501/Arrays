#include<bits/stdc++.h>
using namespace std;
int whoHasMajority(int arr[],int n,int x,int y){
	int countx=0,county=0;
	for(int i=0;i<n;i++){
		if(arr[i]==x)countx++;
		if(arr[i]==y)county++;
	}
	if(countx>county)return x;
	else if(countx<county)return y;
	else return min(x,y);
}
int main(){
	int arr[] = {1,1,2,2,3,3,4,4,4,4,5};
	cout<<whoHasMajority(arr,11,4,5);
	return 0;
}