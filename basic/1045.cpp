#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int num[100002];
int flag1[100002]={0};
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int count=0;	
	for(int i=0;i<n;i++){
		int flag=1;
		for(int j=0;j<i;j++){
			if(num[j]>num[i])flag=0;
		}
		for(int j=i+1;j<n;j++){
			if(num[j]<num[i])flag=0;
		}
		if(flag==1){
		count++;
		flag1[i]=1;
		}
	};
	if(count>0){
	cout<<count<<endl;
	for(int i=0;i<n;i++){
		if(flag1[i]==1){
			if(i==n-1)cout<<num[i];
			else cout<<num[i]<<" ";
		}
	}	
	}
	else cout<<"0";
}
