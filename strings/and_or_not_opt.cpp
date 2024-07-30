#include<bits/stdc++.h>
using namespace std;

string test(string str1, string str2, string opt){
	int size=str1.length();
	string res="";
	for(int i=0;i<size;i++){
		if(opt == "and"){
			if(str1[i]=='1' && str2[i]=='1'){
				res+='1';
			}
			else{
				res+='0';
			}
		}
		else if(opt == "or"){
			if(str1[i]=='0' && str2[i]=='0'){
				res+='0';
			}
			else{
				res+='1';
			}
		}
		else if(opt == "xor"){
			if(str1[i]==str2[i]){
				res+='0';
			}
			else{
				res+='1';
			}
		}
	}
	return res;
}

int main()
{
	string str1;
	string str2;
	cin>>str1;
	cin>>str2;
	string opt;
	cin>>opt;
	
	string res = test(str1, str2, opt);
	
	cout<<res;
	return 0;
}

