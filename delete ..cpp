#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void del(string s){
    string result="";
	for(int i=0;i<s.length();i++){
		if(s[i] != '.'){
		    result+=s[i];
		}
	}
	cout<<result;
}
int main(){
	string s;
	cin>>s;
	del(s);
	return 0;
}