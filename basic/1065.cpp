#include<iostream>
#include<iomanip>//若不填充0则无法ac 
using namespace std;
int main(){
	int n;
	cin>>n;
	int id[100000]={0};
	int flag[100000]={0};
	int a,b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		id[a]=b;
		id[b]=a;
	}
	int m;
	cin>>m;
	int id1;
	int count=0;
	for(int i=0;i<m;i++){
		cin>>id1;
		flag[id1]++;
		if(flag[id[id1]]==1){
			flag[id1]++;
			flag[id[id1]]++;
			count++;
		}
	}
	cout<<m-2*count<<endl;
	int cnt=0;
	
  	for(int i=0;i<100000;i++){
    if(flag[i]==1&&cnt==0)
    {
    	if(i<10000)
    	cout <<setw(5)<<setfill('0')<<i;
    	else
      	cout<<i;
      	cnt++;
    }
    else if(flag[i]==1)
    {	cout<<" ";
		if(i<10000)
    	cout<<setw(5)<<setfill('0')<<i;
    	else
     	cout<<i;
      	cnt++;
    }
    if(cnt==m-2*count)
    {
      break;
    }
  }

}
