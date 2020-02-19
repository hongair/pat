#include<iostream>
#include<string.h>
using namespace std;
char s[10002];
int main(){
	cin>>s;
	char a[10]={'P','A','T','e','s','t'};
	int num[6]={0};
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='P')num[0]++;
		if(s[i]=='A')num[1]++;
		if(s[i]=='T')num[2]++;
		if(s[i]=='e')num[3]++;
		if(s[i]=='s')num[4]++;
		if(s[i]=='t')num[5]++;
	}
	for(int i=0;i<strlen(s);i++){
		for(int j=0;j<6;j++){
			if(num[j]-->0){
			cout<<a[j];}
		}
	}
}
