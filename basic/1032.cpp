#include<iostream>
#include<string.h>
using namespace std;
int goal[100002];
int main(){
	int n,no,score;
	cin>>n;
	memset(goal,0,sizeof(goal));
	while(n--){
		cin>>no>>score;
		goal[no]+=score;
	}
	int max=0,max_index=0;
	for(int i=1;i<100002;i++){
		if(goal[i]>max){
			max=goal[i];
			max_index=i;
		}
	}
	cout<<max_index<<" "<<max;
}
