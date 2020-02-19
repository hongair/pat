#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[1002];
	int b,temp=0,flag=0;
	cin>>a>>b;
	for(unsigned int i=0;i<strlen(a);i++){
		temp=a[i]-'0'+temp*10;
		//cout<<temp<<'\n';
		if(temp>=b){
			cout<<temp/b;
			flag=1; 
		}
		else if(flag){
			cout<<"0";
		}
		temp=temp%b;
	}
	if(flag==0)
	cout<<"0";
	cout<<" "<<temp; 
}
