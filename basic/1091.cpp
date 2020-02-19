#include<iostream>
using namespace std;
int judge(int x){
	int flag=0; 
	int temp; 
	if(x>=1&&x<10){//个位数 
	for(int n=1;n<=10;n++){
		temp=x*x*n;
		if(temp%10==x){
		cout<<n<<" "<<temp<<endl;
		flag=1;
		break;
		}
	}
	}
	if(x>=10&&x<100){//两位数 
	for(int n=1;n<=10;n++){
		temp=x*x*n;
		if(temp%100==x){
		cout<<n<<" "<<temp<<endl;
		flag=1;
		break;
		}
	}
	}
	if(x>=100&&x<1000){//三位数 
	for(int n=1;n<=10;n++){
		temp=x*x*n;
		if(temp%1000==x){
		cout<<n<<" "<<temp<<endl;
		flag=1;
		break;
		}
	}
	}
	if(x==1000){
	for(int n=1;n<=10;n++){
		temp=x*x*n;
		if(temp%10000==x){
		cout<<n<<" "<<temp<<endl;
		flag=1;
		break;
		}
	}
	}
	if(!flag)cout<<"No"<<endl;
}
int main(){
	int n;
	cin>>n;
	int  x;
	while(n--){
		cin>>x;
		judge(x);
	}
} 
