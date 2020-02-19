#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
struct Node{
	int adr,data,next;
}node[1000];
int main(){
	int start,n,k,str;
	cin>>start>>n>>k;
	map<int,Node>m;
	for(int i=0;i<n;i++){
		//cin>>str>>m[str].data>>m[str].next;
		scanf("%d", &str);         //输入结点数据
		scanf("%d %d", &m[str].data, &m[str].next);
	}
	for(int i=0;i<n;i++){
		node[i]={start,m[start].data,0};
		start=m[start].next;
		if(start==-1)
		n=i+1;
		if((i+1)%k==0)
		reverse(node+i+1-k,node+1+i); 
	}
	for(int i=0;i<n;i++){
//		cout<<node[i].adr<<" "<<node[i].data;
//		if(i!=n-1)
//		cout<<node[i+1].adr<<endl;
//		else
//		cout<<"-1";
		printf("%05d %d ", node[i].adr, node[i].data);
		if (i != n - 1)
			printf("%05d\n", node[i + 1].adr);
		else
			printf("-1");  //最后一个结点next为-1
	}
}
