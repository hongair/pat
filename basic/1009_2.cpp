#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str[100];
	int i=0,count=0;
	while(cin>>str[i++]){
		count++;
		if(cin.get()=='\n')
		break;
		
	}
	for(int j=count-1;j>=0;j--){
		if(j==0)
		cout<<str[j];
		else
		cout<<str[j]<<" ";
	}
} 
