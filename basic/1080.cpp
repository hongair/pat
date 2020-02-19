#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<string,int> PAIR;
bool cmp(const pair<string,int>&p1,const pair<string,int>&p2){
	if(p1.second!=p2.second)
	return p1.second>p2.second;
	else if(p1.second==p2.second){
		int flag=p2.first.compare(p1.first);
		if(flag>0)
		return 1;
		else
		return 0;
	}
}
int main(){
	int p,n,m;
	cin>>p>>m>>n;
	map<string,int>online;
	map<string,int>mid;
	map<string,int>final;
	map<string,int>g;
	string id;
	int goal;
	while(p--){
		cin>>id>>goal;
		if(goal>=200){
		
		online[id]=goal;
		mid[id]=-1;
		final[id]=-1;}
	}
	while(m--){
		cin>>id>>goal;
		//g[id]+=goal*0.4;
		mid[id]=goal;
	}
	while(n--){
		cin>>id>>goal;
		final[id]=goal;
		
		if(mid[id]>goal)
		g[id]=mid[id]*0.4+final[id]*0.6+0.5;
		else
		g[id]=final[id];
	}
	vector<PAIR> vpr;
	for(map<string,int>::iterator it=g.begin();it!=g.end();it++){
    vpr.push_back(make_pair(it->first,it->second));
	}
	sort(vpr.begin(),vpr.end(),cmp);
	
	for(int i=0;i<vpr.size();i++){
		if(g[vpr[i].first]>=60&&online[vpr[i].first]>=200){
			
			cout<<vpr[i].first<<" ";
//			if(online[vpr[i].first]==0)cout<<"-1 ";
//			else cout<<online[vpr[i].first]<<" ";
//			
//			if(mid[vpr[i].first]==0)cout<<"-1 ";
//			else cout<<mid[vpr[i].first]<<" ";
//			
//			if(final[vpr[i].first]==0)cout<<"-1 ";
//			else cout<<final[vpr[i].first]<<" ";
			cout<<online[vpr[i].first]<<" "<<mid[vpr[i].first]<<" "<<final[vpr[i].first]<<" ";
			cout<<vpr[i].second<<endl;
		}
	}
}
