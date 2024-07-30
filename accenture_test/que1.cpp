#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int count = 0;
	while(n>0){
		if(n&1){
			count++;
		}
		n=n>>1;
	}
	int ans=0;
	int power=1;
	for(int i=0;i<count;i++){
		ans+=power*1;
//		power=power*2;
		power=pow(2,power);
	}
	
	cout<<ans<<endl;
	
	return 0;
}

