#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string str = "hello world";
	string str1 = "";
	for(int i=0;i<str.length();i++){
		str1 = str[i] + str1;
	}
	cout<<str1;
	return 0;
}

