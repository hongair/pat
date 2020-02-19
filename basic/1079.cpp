#include<iostream>
#include<string.h>
using namespace std;
int nixu(int n){
	int b=0;
	while(n!=0){
	b=b*10+n%10;
	n=n/10;
	}
	return b;
}
bool judge(int n){
	char num[1000];
	//itoa(n,num,10);
	sprintf(num,"%d",n);
	int len=strlen(num);
	//cout<<num[0]<<endl;
	for(int j=0;j<len/2;j++){//cout<<"judge:"<<num[j]<<" "<<num[len-j-1]<<endl;
		if(num[j]!=num[len-j-1]){
		
		return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	int b=nixu(n);
	
	int count=0;
	int c=n+b;
	while(count++<10){
		
		if(count==1){
			cout<<n<<" + "<<b<<" = "<<c<<endl;
		}
		else{
			int d=nixu(c);
			cout<<c<<" + "<<d<<" = "<<c+d<<endl;
			c=c+d;
		}
		
		if(judge(c)){
		cout<<c<<" is a palindromic number.";
		break;}	
	}
	if(count>10)
	cout<<"Not found in 10 iterations.";
} 
