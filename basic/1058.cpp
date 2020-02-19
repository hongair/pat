#include<iostream>
#include<algorithm>
using namespace std;
struct exam1{
	int no;
	int score;
	int a_select;
	int r_select;
	string s;
	int wrong;
}exam[102];
bool cmp(exam1 a,exam1 b){
	if(a.wrong==b.wrong)
	return a.no<b.no;
	else 
	return a.wrong>b.wrong;
}
int main(){
	int n,m;
	int stu_goal[1002]={0};
	cin>>n>>m;
	for(int i=0;i<m;i++){
		exam[i].no=i+1;
		cin>>exam[i].score>>exam[i].a_select>>exam[i].r_select;
		getline(cin,exam[i].s);
		exam[i].wrong=0;
	}

	string ans,s1;
	int no;
	for(int i=0;i<n;i++){
		no=0;
		
		getline(cin,ans);
		for(int j=0;j<ans.length();j++){
			if(ans[j]=='('){
				s1="";
				no++;
				j+=1;
				while(ans[j++]!=')'){
				s1+=ans[j];
				}
				
				s1.erase(s1.end()-1);
				//cout<<"s1:"<<s1<<'\n';
				//cout<<"exam:"<<exam[no-1].s<<'\n';
				if(s1==exam[no-1].s){
					stu_goal[i]+=exam[no-1].score;
				} 
				else
				exam[no-1].wrong++;
			}
		}
		
	} 
	for(int i=0;i<n;i++)
	cout<<stu_goal[i]<<'\n';
	sort(exam,exam+m,cmp);
	if(exam[0].wrong==0)cout<<"Too simple";
	else{
	
	for(int i=1;i<m;i++){
		cout<<exam[0].wrong<<" "<<exam[0].no;
		while(exam[i].wrong==exam[0].wrong){		
		cout<<" "<<exam[i].no;
		i++;
		}	
		//cout<<exam[i].wrong<<" "<<exam[i].no<<'\n';
	
	}}
} 
