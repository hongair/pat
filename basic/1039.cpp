#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char a[1002],b[1002];
	cin>>a;
	cin>>b;
	for(int i=0;i<strlen(a);i++){
		for(int j=0;j<strlen(b);j++){
			if(a[i]==b[j]){
				a[i]='*';
				b[j]='*'; 
			}
		}
	}
	int lack=0,more=0;
	for(int i=0;i<strlen(b);i++){
		if(b[i]!='*')
		lack++;
	}
	if(lack>0){
		cout<<"No "<<lack; 
	}
	else{
		for(int i=0;i<strlen(a);i++){
			if(a[i]!='*')
			more++;
	}
	cout<<"Yes "<<more;
	}
}
