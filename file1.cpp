#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;
	int x;
	int n;
	cin>>n;
	for(int  i = 0; i < n;i++){
		cin>>x;
		v.push_back(x);
	}
	for(auto item: v){
		cout<<item<<" ";
	}
	return 0;
}

