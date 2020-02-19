#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,m,a,b,temp;
	cin>>n>>m>>a>>b>>temp;
	int img[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>img[i][j];
			if(img[i][j]>=a&&img[i][j]<=b)
			img[i][j]=temp;
		}
	} 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(j==0)
			cout<<setw(3)<<setfill('0')<<img[i][j];
			else
			cout<<" "<<setw(3)<<setfill('0')<<img[i][j];		
		}
		if(i!=n-1) 
		cout<<'\n';
	} 
}
