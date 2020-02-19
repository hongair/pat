#include<iostream>
using namespace std;
int main(){
	long long int a,b,c;
	int t;
	cin>>t;
	int num=1; 
	while(t--){
		cin>>a>>b>>c;
		if(a+b>c){
			cout<<"Case #"<<num<<": true"<<endl; 
		}
		else{
			cout<<"Case #"<<num<<": false"<<endl; 
		}
		num++;
	}
}
