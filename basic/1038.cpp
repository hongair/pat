#include<iostream>
using namespace std;
int goal[100002]={0};
int a[100002]={0};
int count[101]={0};
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>goal[i];
		count[goal[i]]++;
	}
	int x;
	cin>>x;
	for(int j=0;j<x;j++){
		cin>>a[j];
	}
	for(int i=0;i<x;i++){
		if(i==x-1)
		cout<<count[a[i]];
		else
		cout<<count[a[i]]<<" ";
		}
} 
