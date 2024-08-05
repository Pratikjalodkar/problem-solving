#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={5,7,1,7,6,0};
	vector<int>brr(6,0);
//	int brr[]={};
	for(int i=0;i<6;i++){
		for(int j=i+1;i<6;i++){
			if(arr[i]<arr[j]){
				brr.push_back(arr[j]);
//				brr[i]=arr[j];
				break;	
			}
		}
//		cout<<brr[i];
		if(!brr[i]){
			brr.push_back(-1);
		}
	}
//	brr.push_back(-1);
	
	for(int i=0;i<6;i++){
		cout<<brr[i]<<" ";
	}
	return 0;
}

