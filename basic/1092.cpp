#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second>b.second;
}
int main(){
	int n,m;
	cin>>n>>m;
	map<int,int> count;
	int num;
	while(m--){
		for(int i=1;i<=n;i++){
			cin>>num;
			count[i]+=num;
		}
	}
	
	vector<pair<int,int>> sales(count.begin(),count.end());
	sort(sales.begin(),sales.end(),cmp);
	cout<<sales[0].second<<endl;
	cout<<sales[0].first;
	for(int i=1;i<n;i++){
		if(sales[i].second==sales[0].second)
		cout<<" "<<sales[i].first;
	}
}
