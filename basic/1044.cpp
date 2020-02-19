#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string temp;
	string three="";
	string high[13]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	string low[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	int num=0;
	getchar();
	for(int x=0;x<n;x++){
		if(x>0)cout<<endl;
		getline(cin,temp);
		if(temp[0]>='0'&&temp[0]<='9'){
			for(int i=0;i<temp.size();i++)
				num=num*10+temp[i]-'0';
			if(num<13)cout<<low[num];
			else{
				if(num%13==0)cout<<high[num/13-1];
				else cout<<high[num/13-1]<<" "<<low[num%13];
			}
		}
		else{
			for(int k=0;k<temp.size();k=k+4){
			three=three+temp[k]+temp[k+1]+temp[k+2];//cout<<three<<" ";
			for(int i=0;i<13;i++){
				if(three==low[i])
				num+=i;
				if(three==high[i])
				num+=(i+1)*13;
			}
			three="";
		}
		cout<<num;
		}
		num=0;
	}
}
