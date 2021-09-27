#include<bits/stdc++.h>
using namespace std;
int calstock(vector<int> v){
	map<int,int> m;
	for(auto a:v){
		m.insert({a,count(v.begin(),v.end(),a)});
	}
	for(auto i=m.begin();i!=m.end();i++)cout<<i->first<<" "<<i->second<<endl;
	auto left=m.begin(),right=m.end();
	int maxv=m.begin()->second;
	int minv=m.begin()->second;
	for(auto i=m.begin();i!=m.end();i++){
		maxv=max(maxv,i->second);
		minv=min(minv,i->second);
	}
	
	while(left->second!=minv){
			left++;
	}
	cout<<left->first;
	while(right->second!=maxv){
			right--;
	}
	cout<<right->first;
	if(left->first>right->first)return 0;
	else return maxv-minv;
	
}
int main(){
	int n;
	cin>>n;
	vector<int> v;
	while(n--){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	cout<<calstock(v);
	return 0;
}