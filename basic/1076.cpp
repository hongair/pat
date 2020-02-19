#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; 
	string pw="",s;
	while(n--){
		for(int i=0;i<4;i++){
			cin>>s;
			if(s[2]=='T'){
				if(s[0]=='A')pw+='1';
				if(s[0]=='B')pw+='2';
				if(s[0]=='C')pw+='3';
				if(s[0]=='D')pw+='4';
			}
		}
	}
	cout<<pw;
} 
