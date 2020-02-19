#include<iostream>
#include<vector>
#include <iomanip>
using namespace std;
string  thing[6];
bool find(string x){
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
	string s,y;
	int x,count=0,count1=0;//x次数,y物品id,count人数,count1物品数 

	for(int i=0;i<n;i++){
		cin>>s>>x;
		vector<string> invalid;
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
			cout<<" "<<invalid[aa];
			cout<<endl;
		}
		
	}
	cout<<count<<" "<<count1;
}
