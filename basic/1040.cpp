#include<iostream>
#include<string.h>
using namespace std;
const int maxx=1e5+10;
char s[maxx];
int t=0,p=0;
long long result;
int main(){
	cin>>s;
	int len=strlen(s);
	
	for(int i=0;i<len;i++){
		if(s[i]=='T')
		t++;
	}
	for(int i=0;i<len;i++){
		if(s[i]=='P')p++;
		if(s[i]=='T')t--;
		if(s[i]=='A')
		result=(result+(t*p)%1000000007) % 1000000007;
		
	}
	cout<<result;
}
