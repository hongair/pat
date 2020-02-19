#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
bool isprime(int num){
	if(num == 1){
		return false;
	}
	for(int i = 2; i <= sqrt(num); i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int l,k;
	cin>>l>>k;
	char str[l];
	cin>>str;
	if(k==0){
		cout<<"404";
		return 0;
	}
	for(int i=0;i<=l-k;i++){
		int result=0;
		char temp[k+1];
		for(int j=i;j<i+k;j++){
			result=str[j]-'0'+result*10;
			temp[j-i]=str[j];
		}
		temp[k]='\0';
		if(isprime(result)){
			cout<<temp;
			return 0;
		}
	}
	cout<<"404";
}
