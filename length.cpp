#include<bits/stdc++.h>
using namespace std;
int length(int n,int d){
	int count=0;
	while(n){
		if(n%10!=d)count++;
		n/=10;
	}
	return count;
}
int main(){
	int n,d;
	cin>>n>>d;
	cout<<length(n,d);
	return 0;
}