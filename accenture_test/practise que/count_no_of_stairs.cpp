#include<bits/stdc++.h>
using namespace std;

int test(int n,int m){
	return (n/m)+(n%m);
}

int main()
{
	int n;
	int m;
	cin>>n;
	cin>>m;
	
	cout<<test(n,m);
	return 0;
}

