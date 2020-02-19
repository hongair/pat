#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> v(n+1); 
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			vector<int>lier,a(n+1,1);//a数组默认为1，即全是好人，下一行设两个狼 
			a[i]=a[j]=-1;
			for(int k=1;k<=n;k++){
				if(v[k]*a[abs(v[k])]<0)//说的和实际的不一样 
				lier.push_back(k);
			}
			if(lier.size()==2&&a[lier[0]]+a[lier[1]]==0){
				cout<<i<<" "<<j;
				return 0; 
			}
		}		
	}
	cout<<"No Solution";
	return 0;
} 
