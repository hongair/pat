#include<iostream>//仅能够识别ll int 范围内的 
using namespace std;
int main(){
	long long int n;
	cin>>n;
	int num[10]={0};
	while(n>0){
		num[n%10]++;
		n=n/10;
	}
	int count=0;
	for(int i=0;i<9;i++){
		if(num[i]!=0){
					
			if(count++==0)
			cout<<i<<":"<<num[i];
			else
			cout<<endl<<i<<":"<<num[i];
			}
	}
} 
