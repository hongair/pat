#include<iostream>//适合位数多的 
using namespace std;
int main(){
	char a[1000]={0};
	int num[10]={0};
	cin>>a;
	for(int i=0;i<1000;i++){		
		num[a[i]-'0']++;
	}
	int count=0;
	for(int i=0;i<=9;i++){
		if(num[i]!=0){
					
			if(count++==0)
			cout<<i<<":"<<num[i];
			else
			cout<<endl<<i<<":"<<num[i];
			}
	}
} 
