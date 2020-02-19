#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cin>>n;	
	int right[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int m[17]={1,0,10,9,8,7,6,5,4,3,2};
	string s1[100];
	int count=0;
	while(n--){
		char id[18];
		int flag=1;
		int x=0;
		cin>>id;
		for(int i=0;i<17;i++){
			if(!(id[i]>='0'&&id[i]<='9'))flag=0;
			else{
				int a=id[i]-'0';
				x+=a*right[i];
			}
		}
		x=x%11;
		x=m[x];
		if(x==10){
			if(id[17]!='X')flag=0;
		}
		else{		 
		int last=id[17]-'0';
		if(last!=x)flag=0;
		}
		if(flag==0)
		s1[count++]=id;
	}
	if(count==0)cout<<"All passed";
	else{
	
	for(int i=0;i<count;i++){
		if(i!=count-1)
		cout<<s1[i]<<endl;
		if(i==count-1)
		cout<<s1[i];
	}}
}
