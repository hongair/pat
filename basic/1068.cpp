#include<iostream>
#include<map>
#include<math.h>
using namespace std;
map<int,int> vis;
int matrix[1001][1001];
int n,m,tol;
int dir[8][2] = {1,0, -1,0, 0,1, 0,-1, 1,1, 1,-1, -1,1, -1,-1};
bool check(int x, int y)
{
	for(int i=0;i<8;i++){
		int xx=x+dir[i][0];
		int yy=y+dir[i][1];
		if(xx>=0&&xx<n&&yy<m&&yy>=0&&abs(matrix[xx][yy]-matrix[x][y])<=tol) return false; 
	}
	return true;
}
int main(){
	
	cin>>m>>n>>tol;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>matrix[i][j];
			vis[matrix[i][j]]++;
		}
	}

	int count=0;
	int x,y,color;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
									
			if(vis[matrix[i][j]]==1&&check(i,j)){			
			count++;
			x=i;
			y=j;
			color=matrix[i][j];
			}
		}
	}
	if(count==0)cout<<"Not Exist";
	else if(count>1)cout<<"Not Unique";
	else cout<<"("<<y+1<<", "<<x+1<<"): "<<color;
} 
