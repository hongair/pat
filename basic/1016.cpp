#include<iostream>
using namespace std;
int main(){
	long long int a,b,pa=0,pb=0;
	int da,db;
	cin>>a>>da>>b>>db;
	while(a>0){
		if(a%10==da){
			pa=pa*10+da;
		}
		a/=10;
	}
	while(b>0){
		if(b%10==db){
			pb=pb*10+db;
		}
		b/=10;
	}
	cout<<pa+pb;
}
