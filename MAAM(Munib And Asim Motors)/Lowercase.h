#include<iostream>
#include<cctype>
using namespace std;
string LowerCase(string a){
	for(int i=0;i<a.length();i++){
		a[i]=tolower(a[i]);
	}
	return a;
}