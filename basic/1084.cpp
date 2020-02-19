#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	char a;
	int n,j,k;
	cin>>a>>n;
	s+=a;
	n--;//第一次已计算 
	while(n--){
		string temp;
		j=0;
		while(j<s.size()){
			k=j+1;
			while(k<s.size()&&s[j]==s[k])
				k++;
			temp+=to_string((s[j]-'0')*10+(k-j));
			j=k;
		}
		s=temp;
	}
	cout<<s;
} 
