#include<iostream>
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int l_b=b.size();
	for(int i=0;i<l_b;i++){
		if(a.find(toupper(b[i]))!=string::npos)continue;
		if(isupper(b[i])&&a.find('+')!=string::npos)continue;
		cout<<b[i];
	}
} 
