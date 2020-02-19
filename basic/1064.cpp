#include<iostream>
#include<vector>
#include<string.h> 
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	string a;
	vector<int> num;
	int flag[50]={0};
	while(n--){
		cin>>a;
		int sum=0;
		for(int i=0;i<a.length();i++){
			sum+=a[i]-'0';
		}
		if(flag[sum]==0){
		
		num.push_back(sum);
		flag[sum]=1;
		}
	}
	sort(num.begin(),num.end());
	cout<<num.size()<<endl;
	for(int i=0;i<num.size();i++){
		if(i==0)
		cout<<num[i];
		else
		cout<<" "<<num[i];
	}
} 
