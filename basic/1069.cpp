#include<iostream>
#include<map>
using namespace std;
int main(){
	int n,m,begin;
	cin>>n>>m>>begin;
	string s;
	map<string,int> win;
	bool flag=false;
	int count=1; 
	for(int i=1;i<=n;i++){
		cin>>s;

		if(count>=begin&&(count-begin)%m==0){
			if (win[s]!=0)
				continue;
			
			win[s]=1; 
			cout<<s<<endl;
			flag=true;
		
		}
		count++;
		
	}
	if (flag == false) cout << "Keep going...";

}
