#include<iostream>
using namespace std;
int main(){
	int n;
	int num[100000];
	cin>>n; 
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int e=num[0];	
	int flag=1;
	while(flag){
		int count=0;	
		for(int i=0;i<n;i++){
			if(num[i]>e){
				count++;
			}
		}
		if(count==e)
		flag=0;
	}
	cout<<e;
} 
