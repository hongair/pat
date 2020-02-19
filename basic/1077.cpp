#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int t=n;
	int t_goal,l_goal,a;
	while(t--){	
	int sum=0;
	int goal[n-1];
	for(int i=0;i<n;i++){		
		if(i==0)
		cin>>t_goal;
		else{
			cin>>a;
			if(a<=m&&a>=0)
			goal[i-1]=a;
		}
	
	}
	
	sort(goal,goal+n);
	for(int j=0;j<n-1;j++){
		sum+=goal[j];
		cout<<goal[j]<<endl;
	}
	
	l_goal=(t_goal+sum/(n-2))/2;
	cout<<"l_goal:"<<l_goal<<endl;
	}
}
