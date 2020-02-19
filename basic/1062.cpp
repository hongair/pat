#include<iostream>
using namespace std;
int f(int a, int b){
    return b==0?a:f(b,a%b);
}
int main(){
	int a1,b1,a2,b2,k;
	char a;
	cin>>a1>>a>>b1;
	cin>>a2>>a>>b2>>k;
	if(a1*b2>a2*b1){
		swap(a1,a2);
		swap(b1,b2);
	}
	int num=1;
	while(a1*k>=b1*num)num++;
	int count=1;
	while(a1*k<b1*num&&b2*num<a2*k){
		if(f(num,k)==1){
			if(count++==1)
			cout<<num<<"/"<<k;
			else
			cout<<" "<<num<<"/"<<k;
		}
		num++;
	}
}
