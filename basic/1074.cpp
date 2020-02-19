#include<iostream>
#include<vector>
using namespace std;
int main(){
	int num_a,num_b;
	string n;
	vector<int> jzb;
	vector<int> a;
	vector<int> b;
	//vector<int> num;
	int num[20];
	cin>>n>>num_a>>num_b;
	for(int i=n.size()-1;i>=0;i--){//½øÖÆ±í 
		if(n[i]=='0'||n[i]=='d'){
			jzb.push_back(10);
		}
		else{
			int temp=n[i]-'0';
			jzb.push_back(temp);
		}
	}
	//for(int i=0;i<jzb.size();i++)cout<<jzb[i]<<'\t';cout<<'\n';
	while(num_a>0){
		int jz=num_a%10;
		a.push_back(jz);
		num_a/=10;
	}
	while(num_b>0){
		int jz=num_b%10;
		b.push_back(jz);
		num_b/=10;
	}
	//while(a.size()<jzb.size())a.push_back(0);
	//while(b.size()<jzb.size())b.push_back(0);
	
	int jw=0,in,i=0;
	while(a[i]!=)
		
		int c=a[i]+b[i]+jw;//cout<<c<<" ";
		if(c>=jzb[i]){
			in=c-jzb[i];
			jw=1;
			//num.push_back(in);
			num[i]=in;
		}
		else{
			in=c;
			jw=0;
			//num.push_back(in);
			num[i]=in;
		}
		//cout<<in<<" "<<jw<<'\n';
	}
	bool flag=0;
	for(int i=jzb.size();i>=0;i--){
		if(num[i]!=0)flag=1;
		if(num[i]==0&&!flag)continue; 
		cout<<num[i];
	}
	if(flag==0)cout<<"0";
} 
