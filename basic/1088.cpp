#include<iostream>
#include<math.h>
using namespace std;
int change(int i){
	int temp=0;
	while(i>0){
		temp=temp*10+i%10;
		i=i/10;
	}
	return temp;
}
int main(){
	int m,x,y;
	int a,b;
	double c;
	cin>>m>>x>>y;
	int temp;
	bool flag=0;
	for(int i=99;i>9;i--){
		temp=change(i);
		c=(double)temp/y;//cout<<c<<endl;		
		if(abs(i-temp)==x*c&&temp==y*c){
			a=i;
			b=temp;
			flag=1;
			break;
		}
//		c=(double)abs(temp-i)*1.0/x;//该解法也正确 
//		if(temp==c*y){
//			a=i;
//			b=temp;
//			flag=1;
//			break;
//		}
	}
	//cout<<a<<" "<<b<<" "<<c<<endl;
	if(flag){
	
	cout<<a<<" ";
	if(m<a)cout<<"Cong ";
	if(m==a)cout<<"Ping ";
	if(m>a)cout<<"Gai ";
	
	if(m<b)cout<<"Cong ";
	if(m==b)cout<<"Ping ";
	if(m>b)cout<<"Gai ";
	
	if(m<c)cout<<"Cong";
	if(m==c)cout<<"Ping";
	if(m>c)cout<<"Gai";	}
	else{
		cout<<"No Solution";
	}
}
