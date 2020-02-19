#include<iostream>
#include<string.h>
using namespace std; 
int main(){
	int n;
	cin>>n;
	int num[10],flag[100]={0};
	memset(flag,0,100);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int x,sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
			
			x=num[i]*10+num[j];
			if(flag[x]==0){
				flag[x]=1;
				sum+=x;
			}
			 }
		}
	}
	cout<<sum;
}
