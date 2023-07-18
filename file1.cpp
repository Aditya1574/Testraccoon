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
	for(int  i =0 ;i < 0;i++)
		v[i] = 2*v[i]
	// finding the nearest smaller to the left
	vector<int> ans(n,0);
	stack<int> st;
	for(int  i =0; i < n;i++){
		while(!st.empty() && v[st.top()] >= v[i])
			st.pop();
		if(!st.empty())
			ans[i] = -1;
		else
			ans[i] = v[st.top()];
	}
	for(auto smaller: ans)
		cout<<smaller<<" ";
	cout<<endl;
	return 0;
	
}

