#include<bits/stdc++.h>
using namespace std;
int test(int arr[],int s){
	arr[3]=55;
//	return arr;
}
int main()
{
	int arr[]={1,2,3,4,5};

	int s=sizeof(arr)/sizeof(int);
	int r=test(arr,s);
	
	for(int i=0;i<s;i++){
		cout<<arr[i];
	}
	return 0;
}

