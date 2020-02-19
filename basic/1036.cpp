#include<iostream>
using namespace std;
int main(){
	int n;
	char a;
	cin>>n;
	cin>>a;
	
	int y=(n+1)/2;
	//1
	for(int i=0;i<n;i++){
		cout<<a;
	}
	cout<<endl;
	//2--y-1
	for(int i=2;i<y;i++){
		for(int j=0;j<n;j++){
			if(j==0||j==n-1)
			cout<<a;
			else
			cout<<" ";
			}
	cout<<endl;
	}		
	
	for(int i=0;i<n;i++){
		cout<<a;
	}
} 
