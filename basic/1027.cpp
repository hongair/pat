#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,x;
	char a;
	cin>>n>>a;
	if(n<7){
		cout<<a<<endl;
		cout<<n-1;
	}
	else{	
	x=(int)sqrt(2*n+2)-1;
	int j,count=0;
	for(int i=x;i>0;i=i-2){
		for(j=0;j<(x-i)/2;j++)
		cout<<" ";
		for(j=0;j<i;j++){		
		cout<<a;
		count++;}
		cout<<'\n';
	}
	for(int i=3;i<=x;i=i+2){
		for(j=0;j<(x-i)/2;j++)
		cout<<" ";
		for(j=0;j<i;j++){		
		cout<<a;
		count++;}
		cout<<'\n';
	}
	cout<<n-count;
	}
} 
