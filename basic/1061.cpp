#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int goal[102]={0},ans[102]={0},stu[102]={0};
	for(int i=0;i<m;i++){
		cin>>goal[i];
	}
	for(int i=0;i<m;i++){
		cin>>ans[i];
	}
	int a;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){		
		cin>>a;
		if(a==ans[j])
		stu[i]+=goal[j];
		}
	}
	for(int i=0;i<n;i++){
		if(i==n-1)
		cout<<stu[i];
		else
		cout<<stu[i]<<endl;
	}
}
