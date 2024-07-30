#include<bits/stdc++.h>
using namespace std;

bool pallindrome(string str,int s,int e){
	while(s<=e){
		if(str[s]==str[e]){
			s++;e--;
		}
		else{
			return false;	
		}
	}
	return true;
}

int main()
{
	string str;
	cout<<"Enter a String: ";
	cin>>str;
	bool result = pallindrome(str,0,str.length()-1);
	if(result){
		cout<<"String is pallindrome";
	}else{
		cout<<"Not a pallindrome";
	}
	return 0;
}

