#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int num[100002],lmax[100002],rmin[100002];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int count=0,max,min;	
	for(int i=0,max=i;i<n;i++){
		lmax[i]=num[i]>=num[max]?num[i]:num[max];
	}
	for(int i=n-1,min=i;i>=0;i--){
		rmin[i]=num[i]<=num[min]?num[i]:num[min];
	}
	
	for(int i=0;i<n;i++){
		if(num[i]==lmax[i]&&num[i]==rmin[i]) count++;
		else num[i]=0;
	}
	if(count>0){
	cout<<count<<endl;
	for(int i=0;i<n;i++){
		if(num[i]!=0){
			if(i==n-1)cout<<num[i];
			else cout<<num[i]<<" ";
		}
	}	
	}
	else cout<<"0";
}
