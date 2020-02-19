#include<iostream>
using namespace std;
bool f(long long int x){
	if(x==2||x==3||x==5||x==7){
		return 1;
	}
	else{
	
	for(long long int i=2;i<=x/2;i++){
		if(x%i==0){return 0;
		}
	} }
	return 1;
}
int main(){
	int count=0;
	long long int j;
	for(j=2;count<10000;j++){//测试第10000个素数大小 
		if(f(j)){
			cout<<j<<" ";
			count++;
		}
	}

} 
