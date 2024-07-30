#include<bits/stdc++.h>
using namespace std;

string reverse(string str){
	string rev="";
	string res="";
	for(int i=str.length();i>=0;i--){
		if(str[i]!=' '){
			rev=str[i]+rev;
		}
		else{
			res=res+rev+' ';
			rev="";
		}
	}
	res=res+rev;
	return res;
}

int main()
{
	string str;
	getline(cin,str);
//	cin>>str;
	cout<<reverse(str);
	return 0;
}

