#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
	int n,m,x,y;
	cin>>n>>m;
	map<int,vector<int>>re;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		re[x].push_back(y);
		re[y].push_back(x);	
	}
	for(int i=0;i<m;i++){
		int  count,flag=0,a[100000]={0};
		cin>>count;
		vector<int>list(count);
		for(int i=0;i<count;i++){//������ȫ����1 
			cin>>list[i];
			a[list[i]]=1;
		}
		for(int i=0;i<count;i++){//����������Ʒ 
			for(int j=0;j<re[list[i]].size();j++){//��������Ʒ�Ĳ����ݱ� 
				if(a[re[list[i]][j]]==1)flag=1;
				
			}
		}		
		if(flag)cout<<"No"<<endl;
		else cout<<"Yes"<<endl;		
	}
} 
