#include<iostream>
using namespace std;
int num[100002];
int main(){
	int n,x;
	int max=0,max_index=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x>max){
			num[max_index++]=x;
			max=x;
		}
		else{
			int j=0;
			for(j=max_index-1;j>=0;j--){
				if(num[j]>x){
					num[j]=0;
					max_index--;
				}
				else{
					max_index=j+1;
					break;
				}
			}
		}
	} 
	cout<<max_index<<endl;
	if(max_index!=0){
		for(int i=0;i<max_index-1;i++)
			cout<<num[i]<<" ";
		cout<<num[max_index-1];
	}
	else cout<<endl;
}
