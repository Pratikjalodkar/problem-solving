#include<bits/stdc++.h>
#include<cmath>
using namespace std;

// diff of sum of sqrt of even and odd no.

double sum(int a,int b){
	double evenAns;
	double oddAns;
	for(int i=a;i<=b;i++){
		double squarert=sqrt(i);
		if(i%2==0){
			evenAns+=squarert;
		}else{
			oddAns+=squarert;
		}
	}
	return evenAns-oddAns;
}

int main()
{
	int a,b;
	cin>>a>>b;
//	cout<<sum(a,b);
	
	return 0;
}

