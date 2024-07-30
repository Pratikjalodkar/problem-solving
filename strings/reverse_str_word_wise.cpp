#include<bits/stdc++.h>
using namespace std;

//	i/p-hello world
//	o/p-world hello

// others method
void reverse2(string s1){
	vector<string>str;
	int i=0;
	string res="";
	while(i<s1.length()){
		if(s1[i]==' '){
			str.push_back(res);
			str.push_back(" ");
			
			res="";
		}
		else{
			res+=s1[i];
		}
		i++;
	}
	str.push_back(res);
	for(int i=str.size()-1;i>=0;i--){
		cout<<str[i];
	}
}

// my method
string reverse(string s1){
	string s=' '+s1;
	int i=s.length();
//	char c=s[0];
	string res="";
	string result="";
	while(i>=-1){
		if(s[i]==' '){
			result=result+res+" ";
			res="";
		}
		else{
			res=s[i]+res;
		}
		i--;
	}
	return result;
}

int main()
{
	string s;
	getline(cin,s);
	
//	cout<<reverse(s);
	reverse2(s);

	return 0;
}

