#include<bits/stdc++.h>
using namespace std;
int median(int A[],int n)
{
	sort(A,A+n);
	if(n%2){
		return A[n/2];
	}else{
		 return floor((A[n/2]+A[n/2-1])/2);
	}
}

int mean(int A[],int N)
{
	int sum=0;
	for(int i=0;i<N;i++){
		sum+=A[i];
	}
	return floor(sum/N);
}
int main(){
	int A[]={1, 2, 19, 28, 5};
	cout<<mean(A,5)<<endl<<median(A,5)<<endl;
	return 0;
}