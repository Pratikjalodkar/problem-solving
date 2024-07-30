#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int m;
	cin>>n;
	cin>>m;
	
	int c=0;
	int i=0;
	while(i<n){
		i+=m;
		c++;
	}
	c=n-i;
	cout<<c;
	return 0;
}

