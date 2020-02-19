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
	int n,m;
	cin>>m>>n;
	int no=1;
	int j=2;
	for(j=2;j<105000&&no<=n;j++){
		if(f(j)){
			a[no++]=j;
		}
	}
	int count=0;
	for(int i=m;i<=n;i++){
		if(count==0)
		cout<<a[i];
		else if(count%10==0)
		cout<<'\n'<<a[i];
		else
		cout<<" "<<a[i];
		count++;
	}
} 
