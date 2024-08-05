#include<bits/stdc++.h>
using namespace std;

vector<int>helper(vector<int>v,int n){
	vector<int>ans(n,0);
	
	if(n==0){
		return ans;
	}
	
	stack<int>s;
	s.push(v[n-1]);
	
	ans[n-1]=-1;
	
	for(int i=n-2;i>=0;i--){
		int cv = v[i];
		if(cv<s.top()){
			ans[i] = s.top();
		}
		else{
			while(s.size()>0 and s.top()<=cv){
				s.pop();
			}
			ans[i]=s.size()>0 ? s.top() : -1;
			
		}
		
		s.push(cv);
		
		
	}
	return ans;
	
}

int main()
{
	vector<int>v={5,7,1,7,6,0};
	helper(v,v.size());
	return 0;
}

