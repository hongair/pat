#include<iostream>
using namespace std;
int main(){
	long long int x,y,a;
	cin>>x>>y;
	a=x*y;
	if(a==0)cout<<"0";
	else{
	int flag=0;
	while(a>0){
		if(a%10==0&&flag==0){//不能以0开头 
		a=a/10;
		continue;
		}
		cout<<a%10;
		flag=1;
		a=a/10;
	}
	}
}
