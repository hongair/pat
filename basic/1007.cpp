#include<iostream>
#include<math.h>
using namespace std;
int a[10002]={0};
bool f(int x){
	if(x==2||x==3||x==5||x==7){
		return 1;
	}
	else{
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
		return 0;
		}
	} }
	return 1;
}
int main(){
	int n;
	cin>>n;
	int no=1;
	int j;
	for(j=2;j<=n;j++){
		if(f(j)){
			a[no++]=j;
		}
	}
	int count=0;
	for(int j=2;j<no;j++){
		if(a[j]-a[j-1]==2)
		count++;
	}
	 cout<<count;
} 
