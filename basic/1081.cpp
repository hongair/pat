#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;getchar();
	while(n--){
		string s;
		
//		cin>>s;
		
		getline(cin,s);
		int flag=0,changdu=0,zimu=0,suzi=0;
		if(s.length()<6)
		changdu=0;
		else{
		changdu=1;		
		for(int i=0;i<s.length();i++){
//			if(!(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||(s[i]=='.')){
//			
//			flag=1;
//			cout<<s[i]<<" ";}
			if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
			zimu=1;
			else if(s[i]>='0'&&s[i]<'9')
			suzi=1;
			else if(s[i]!='.')
			flag=1;
		}
	}
		if(changdu==0)cout<<"Your password is tai duan le."<<endl;
		else{
			if(flag==1)cout<<"Your password is tai luan le."<<endl;
			else{
				if(zimu==1&&suzi==0)cout<<"Your password needs shu zi."<<endl;
				else if((zimu==0&&suzi==1)||(zimu==0&&suzi==0))cout<<"Your password needs zi mu."<<endl;
				else cout<<"Your password is wan mei."<<endl;
			}
		}
	}
}
