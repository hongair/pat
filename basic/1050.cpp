#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int N;
	cin>>N;
	int num[10002]={0};
	
	int n,m;
//	for(x=N;x>0;x--){
//		for(y=1;y<x;y++){		
//		if(x*y==N){
//			m=x;
//			n=y;
//		}
//	}}
 	for (int i = sqrt((double)N); i >= 1; i--) {
        if (N % i == 0) {
            n = i;
            break;
        }
    }
    m = N / n;
	int matrix[m][n]={0};
	//cout<<m<<" "<<n;
	for(int i=0;i<N;i++){
		cin>>num[i];
	}
	sort(num,num+N,cmp);
	int urow = 0, drow = m - 1, lcol = 0, rcol = n - 1, i = 0;
    for (int k = n / 2 + n % 2; k >= 0; k--) { //从外到里遍历的圈数 
        for(int j=lcol;j<=rcol&&i!=N;j++)
        	matrix[urow][j]=num[i++];
        urow++;
        for(int j=urow;j<=drow&&i!=N;j++)
        	matrix[j][rcol]=num[i++];
        rcol--;
        for(int j=rcol;j>=lcol&&i!=N;j--)
        	matrix[drow][j]=num[i++];
        drow--;
        for(int j=drow;j>=urow&&i!=N;j--)
        	matrix[j][lcol]=num[i++];
        lcol++;
    } 
	for (int i = 0; i < m; i++) { //输出矩阵
        for (int j = 0; j < n; j++) {
        	if(i==m-1&&j==n-1){
        		cout<<matrix[i][j];
			}else{
			
            if (j == n - 1) {
                cout<<matrix[i][j]<<endl;
            } 
			else {
                cout<<matrix[i][j]<<" ";
            }}
        }
    }
} 
