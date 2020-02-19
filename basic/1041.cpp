#include<iostream>
using namespace std;
struct stu{
	char id[17];
	int t;
	int r;
}stu[1002];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stu[i].id>>stu[i].t>>stu[i].r;
	}
	int x,a;
	cin>>x;
	int count=0;
	for(int i=0;i<x;i++){
		cin>>a;
		for(int j=0;j<n;j++){
			if(stu[j].t==a){
				if(count++==0){				
				cout<<stu[j].id<<" ";
				cout<<stu[j].r;
				}
				else{
					cout<<endl<<stu[j].id<<" ";
					cout<<stu[j].r;
				} 
			}
		}		
	}
}
