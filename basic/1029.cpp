#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int flag[37]={0};
	int lenth1=s1.size();
	int j=0;
	for(int i=0;i<lenth1;i++){
		if(s1[i]==s2[j]){
		j++;
		continue;}
		else {
			if(s1[i]>='A'&&s1[i]<='Z'&&flag[s1[i]-'A']!=1){
				cout<<s1[i];
				flag[s1[i]-'A']=1;
			}
			else if(s1[i]>='a'&&s1[i]<='z'&&flag[s1[i]-'a']!=1){
          		cout<<char(s1[i]+'A'-'a');
          		flag[s1[i]-'a']=1;
		  	} 
		  	else if(s1[i]>='0'&&s1[i]<='9'&&flag[s1[i]-'0'+26]!=1){
          	cout<<s1[i];
          	flag[s1[i]-'0'+26]=1;
        	}
        	else if(s1[i]=='_'&&flag[36]!=1){
          	cout<<'_';
          	flag[36]=1;
		}
	}
}
}
