#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[100];
	gets(str);
	int len=strlen(str);
	int r=0,h=0;
	char a[90][90];
	for(int i=0;i<len;i++){
		if(str[i]!=' ')
		a[r][h++]=str[i];
		else{
			a[r][h]='\0';
			r++;
			h=0;
		}
	}
	for(int i=r;i>=0;i--){
		cout<<a[i];
		if(i>0)
		cout<<" ";
	}
} 
