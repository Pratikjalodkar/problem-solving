#include<bits/stdc++.h>
using namespace std;

string test(string str, char ch1, char ch2){
	string res=str;
	
	for(int i=0;i<str.length();i++){
		if(str[i]==ch1){
			res[i]=ch2;
		}
		else if(str[i]==ch2){
			res[i]=ch1;
		}
	}
	return res;
}

int main()
{
	string str;
	char ch1;
	char ch2;
	
	cin>>str;
	cin>>ch1;
	cin>>ch2;
	
	cout<<test(str,ch1,ch2);
	return 0;
}

