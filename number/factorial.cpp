#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==0||n==1){
		fact(n);
	}
	else{
		return fact(n-1);
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n);
	return 0;
}

