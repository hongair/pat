#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
	double p1,p2,r1,r2;
	cin>>r1>>p1>>r2>>p2;
	double a,b;
	a=r1*r2*cos(p1+p2);
	b=r1*r2*sin(p1+p2);
	if(fabs(a)<0.005&&fabs(b)<0.005)cout<<"0";
	else{
		if(fabs(a)<0.05)cout<<"0.00";
		else cout<<fixed<<setprecision(2)<<a;
		if(b<-0.005){
			cout<<"-";
			b=-b;
		}
		else cout<<"+";
		if(b<0.05)cout<<"0.00i";
		else cout<<fixed<<setprecision(2)<<b<<"i";
	}

}
