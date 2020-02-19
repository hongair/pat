#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[3]={0};
	if(n>=100){	
			a[0]=n/100;
			n=n%100;
			a[1]=n/10;
			n=n%10;
			a[2]=n;
		while(a[0]--)cout<<"B";
		while(a[1]--)cout<<"S";
		for(int j=1;j<=a[2];j++)
		cout<<j;
	}
	else if(n>=10&&n<100){	
			a[1]=n/10;
			n=n%10;
			a[2]=n;
		while(a[1]--)cout<<"S";
		for(int j=1;j<=a[2];j++)
		cout<<j;
	}
	else if(n<10){	
			a[2]=n;
		for(int j=1;j<=a[2];j++)
		cout<<j;
	}
} 
