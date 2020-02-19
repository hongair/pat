#include<iostream>
using namespace std;
int flag[300]={0};//是否计算过 
int num[102]={0};//输入中是否有 
int main(){
	int n,x;
	cin>>n;
	while(n--){
		cin>>x;
		num[x]=1;
		while(x!=1){
		
		if(x%2==0){
			x=x/2;
		}
		else{
			x=(3*x+1)/2;
		}
		flag[x]++;
		}
	}
	int count=0;
	for(int i=100;i>0;i--){
		if(num[i]==1&&flag[i]==0){
			count++;
			if(count==1)
			cout<<i;
			else
			cout<<" "<<i; 
		}

	}
} 
