#include<iostream>
using namespace std;
int main(){
	int n,m;
	int count=0;
	do{
		cin>>n>>m;
		if(m>0){
			if(count==0){	
			cout<<n*m<<" "<<m-1;
			count++;
			}
			else
			cout<<" "<<n*m<<" "<<m-1;
		}
		if(count==0)
		cout<<0<<" "<<0;
	}while(getchar()!='\n');
} 
