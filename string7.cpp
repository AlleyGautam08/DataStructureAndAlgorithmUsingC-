#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1 ="abc";
	string s2 ="abc";
	if(!s1.compare(s2))
	cout<<" strings are equal";
	cout<<s2.compare(s1)<<endl;
	
	
	return 0;
}
