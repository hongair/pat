#include<iostream>
#include<string> 
#include<string.h> 
using namespace std;
string yasuo(string in){
	string ans="";
	int count=1;
	for(int i=0;i<in.length();i++){
		if(in[i]==in[i+1])
		count++;
		else{
			if(count>1)
			ans+=to_string(count);
			ans+=in[i];
			count=1;
		}
	}
	return ans;
}
string jieya(string in){
	string ans="",n="";
	for(int i=0;i<in.length();i++){
		while(isdigit(in[i])){
			n+=in[i];//数字位为多位时 
			i++;
			if(!isdigit(in[i]))
				for(int j=0;j<atoi(n.c_str())-1;j++)
				ans+=in[i];
		}
		n="";
		ans+=in[i];
	}
	return ans;
}
int main(){
	string in;
	char s;
	cin>>s;
	getchar();
	getline(cin,in);
	if(s=='C')cout<<yasuo(in);
	if(s=='D')cout<<jieya(in);
}
