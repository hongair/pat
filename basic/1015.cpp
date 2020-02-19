#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
struct score{
	string num;
	int de;
	int cai;
	int grade;
	int total;
	bool operator <(const score &A)const{
	  if(de+cai!=A.cai+A.de){
	  	return de+cai>A.cai+A.de;
	  }else{
	  	if(de!=A.de)
	  	  return de>A.de;
	  	  else 
	  	    return num<A.num;
	  }
	}
};
int main(){
	int n,l,h;
	static score stu[100002];
	vector<score> v1,v2,v3,v4,v5;
	int count=0;
	cin>>n>>l>>h;
	for(int i=0;i<n;i++){
		cin>>stu[i].num>>stu[i].de>>stu[i].cai;
		stu[i].total=stu[i].de+stu[i].cai;
		if(stu[i].de>=l&&stu[i].cai>=l){
			count++; 
			if(stu[i].de>=h&&stu[i].cai>=h){
				stu[i].grade=1;
				v1.push_back(stu[i]);
			}
			else if(stu[i].de>=h&&stu[i].cai<h){
				stu[i].grade=2;
				v2.push_back(stu[i]);
			}
			else if(stu[i].de<h&&stu[i].cai<h&&stu[i].de>=stu[i].cai){
				stu[i].grade=3;
				v3.push_back(stu[i]);
			}
			else{
				stu[i].grade=4;
				v4.push_back(stu[i]);
			}
				
		}
	}
	cout<<count<<endl;

	sort(v1.begin(), v1.end());  
    sort(v2.begin(), v2.end());  
    sort(v3.begin(), v3.end()); 
	sort(v4.begin(), v4.end());  

	vector<score>::iterator itr;
    for(itr = v1.begin();itr!=v1.end();++itr)
       cout<<itr->num<<" "<<itr->de<<" "<<itr->cai<<endl;
       for (itr = v2.begin(); itr != v2.end(); ++itr)  
       cout<<itr->num<<" "<<itr->de<<" "<<itr->cai<<endl; 
    for (itr = v3.begin(); itr != v3.end(); ++itr)  
        cout<<itr->num<<" "<<itr->de<<" "<<itr->cai<<endl;
    for (itr = v4.begin(); itr != v4.end(); ++itr)  
       cout<<itr->num<<" "<<itr->de<<" "<<itr->cai<<endl;

	
} 
