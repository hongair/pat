#include<iostream>
#include<vector>
#include <iomanip>
using namespace std;
int  thing[6]={0};
bool find(int x){
	for(int i=0;i<6;i++){
		if(thing[i]==x)
		return 1;
	}
	return 0;
}
int main(){
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		cin>>thing[i];
	}
	string s;
	int x,y,count=0,count1=0;//x次数,y物品id,count人数,count1物品数 

	for(int i=0;i<n;i++){
		cin>>s>>x;
		vector<int> invalid;
		bool flag=0;
		for(int j=0;j<x;j++){
			cin>>y;
			if(find(y)){
				flag=1;
				invalid.push_back(y);
				count1++;
			}
		}
		if(flag){
			count++;
			cout<<s<<":";
			for(int aa=0;aa<invalid.size();aa++)
			cout<<" "<<setw(4)<<setfill('0')<<invalid[aa];
			cout<<endl;
		}
		
	}
	cout<<count<<" "<<count1;
}
