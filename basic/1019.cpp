#include<iostream>
#include<algorithm>
#include <iomanip>
using namespace std;
int f(int n,int &x1,int &x2,int &x3,int &x4){
	x1=n/1000;
	n=n%1000;
	x2=n/100;
	n=n%100;
	x3=n/10;
	n=n%10;
	x4=n;
}
bool cmp(int a,int b)
{
    return a<b;
}
int a(int x1,int x2,int x3,int x4){
	int a1[4]={x1,x2,x3,x4};
	sort(a1,a1+4,cmp);
	int right ;
	for(int i=0;i<4;i++){
		//cout<<a1[i]<<'\t';
		right=a1[i]+right*10;
	}//cout<<right<<endl;
	return right;
}
int b(int x1,int x2,int x3,int x4){
	int b1[4]={x1,x2,x3,x4};
	sort(b1,b1+4);
	int left;
	for(int i=3;i>=0;i--){
		//cout<<b1[i]<<'\t';
		left=b1[i]+left*10;
	}//cout<<left<<endl;
	return left;
}
int main(){
	int n,x1,x2,x3,x4,left=0,right=0;
	cin>>n;
	if(n%1111==0){
		cout<<n<<"-"<<n<<"=0000";
	}
	else{
		while(n!=6174){
			f(n,x1,x2,x3,x4);
			right=a(x1,x2,x3,x4);
			//cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<endl;
			left=b(x1,x2,x3,x4);
			n=left-right;//cout<<right<<" "<<left<<" "<<n<<endl;

			cout<<left<<"-";
			cout<<setw(4)<<setfill('0')<<right;
			cout<<"=";
			cout<<setw(3)<<setfill('0')<<n<<endl;
		}
	}
}
