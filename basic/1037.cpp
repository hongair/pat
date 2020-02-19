#include<iostream>
using namespace std;
int main(){
	int g1,g2,g3,s1,s2,s3,k1,k2,k3;
	char a;
	cin>>g1>>a>>s1>>a>>k1;
	cin>>g2>>a>>s2>>a>>k2;
	s1+=g1*17;
	k1+=s1*29;
	s2+=g2*17;
	k2+=s2*29;
	k3=k2-k1;
	if(k3<0){
		cout<<"-";
		k3=0-k3;
	}
	g3=k3/29/17;	
	s3=k3/29-g3*17;
	int x=g3*17+s3;
	k3=k3-x*29;
	cout<<g3<<"."<<s3<<"."<<k3;
}
