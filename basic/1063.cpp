#include<iostream>
#include<math.h>
#include<iomanip> 
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b;
	double max=0,ans;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		ans=sqrt(a*a+b*b);
		if(ans>max)
		max=ans;
	}
	cout<<fixed<<setprecision(2)<<max;
} 
