#include<iostream>
#include<algorithm>
using namespace std;
struct person{
	string name;
	int height;
}people[10000];
bool cmp(person a,person b){
	if(a.height!=b.height)
	return a.height>b.height;
	else 
	return a.name<b.name;
}
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>people[i].name>>people[i].height;
	}
	sort(people,people+10000,cmp);
//	for(int i=0;i<n;i++){
//		cout<<people[i].name<<" "<<people[i].height<<'\n';
//	}
	int aver=n/k,final=n%k+aver,count=0;
	string result="";
	for(int i=0;i<n;){
		if(i==0){
			result=people[i].name;
			i++;
			for(int j=1;j<final;j++,i++){
				if(j%2==1) result=people[i].name+" "+result;
				if(j%2==0) result=result+" "+people[i].name;
			}
			cout<<result<<endl;	
		}
		else{
			count++;
			result=people[i].name;
			i++;
			for(int j=1;j<aver;j++,i++){
				if(j%2==1) result=people[i].name+" "+result;
				if(j%2==0) result=result+" "+people[i].name;
			}
			if(count==1)
			cout<<result;			
			else cout<<endl<<result;	
		}
	}
}
