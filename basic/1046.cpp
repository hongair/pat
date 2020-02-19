#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x1[n],x2[n],y1[n],y2[n];
	for(int i=0;i<n;i++){
		cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
	}
	int count1=0,count2=0,flag=1;
	for(int j=0;j<n&&flag==1;j++){	
		if(x1[j]+x2[j]!=y1[j]&&x1[j]+x2[j]==y2[j]){
			count1++;			
		}
		if(x1[j]+x2[j]==y1[j]&&x1[j]+x2[j]!=y2[j]){
			count2++;			
		}

		
	}
	cout<<count1<<" "<<count2;
} 
