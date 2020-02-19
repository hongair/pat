#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	long long int c1,c2;
	cin>>c1>>c2;
	long long int c=double(c2-c1)/100+0.5;
	int h=c/3600;
	int m=c%3600/60;
	int s=c%60;
	cout<<setw(2)<<setfill('0')<<h;
	cout<<":";
	cout<<setw(2)<<setfill('0')<<m;
	cout<<":";
	cout<<setw(2)<<setfill('0')<<s;
	
} 
