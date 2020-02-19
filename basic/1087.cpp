#include<iostream>
using namespace std;
int count[100000]={0};
int main(){
	int n;
	cin>>n;	
	for(int i=1;i<=n;i++){
		int sum=i/2+i/3+i/5;
		count[sum]++;
	}
	int time=0;
	for(int i=0;i<100000;i++){
		if(count[i]!=0)
		time++;
	}
	cout<<time;
} 
