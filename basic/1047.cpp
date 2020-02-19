#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int max=0,max_team=0;
	int t_n,m_n,score;
	char a;
	int goal[1002]={0};
	while(n--){
		cin>>t_n>>a>>m_n>>score;
		goal[t_n]+=score;
		if(goal[t_n]>max){
			max=goal[t_n];
			max_team=t_n;
		}
	}
	cout<<max_team<<" "<<max;
}
