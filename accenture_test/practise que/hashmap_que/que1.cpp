#include<bits/stdc++.h>
using namespace std;

int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	string s;
	cin>>s;
	
	map<char,int>mp;
	for(auto i:s){
		if(i=='a'|| i=='e' || i=='i' || i=='o' || i=='u'){
			mp[i]++
		}
	}
	
	int mx=0;
	for(auto i:mp){
		mx=max(mx,i.second);
	}
	
	for(auto i:mp){
		if(i.second==mx){
			cout<<i.first<<endl;
			break;
		}
	}
	return 0;
}

