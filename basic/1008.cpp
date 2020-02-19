#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,x,temp;
	cin>>n>>x;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	while(x--){
		temp=a[n-1];
		for(int i=n-1;i>0;i--){
			a[i]=a[i-1];
		}
		a[0]=temp;
		
	}
	
	for(int f=0;f<n;f++){
		if(f!=n-1)		
		cout<<a[f]<<" ";
		else 
		cout<<a[f];
	}
	
} 
