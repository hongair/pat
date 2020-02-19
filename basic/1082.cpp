#include<iostream>
#include<map>
#include<math.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<string, float> PAIR;  
int cmp(const PAIR& x, const PAIR& y)//针对PAIR的比较函数
{  
    return x.second > y.second;  //从大到小
}  
int main(){
	int n;
	map<string,float> grade;
	cin>>n;
	while(n--){
		string id;
		int x,y;
		cin>>id>>x>>y;
		float a=sqrt(x*x+y*y);
		//grade.insert(id,a);
		grade.insert(make_pair(id,a));
	}
	
	vector<PAIR> vc(grade.begin(),grade.end());
  	sort(vc.begin(), vc.end(), cmp); //排序 	
	vector<PAIR>::iterator vit;
	vit=vc.end()-1;cout<<vit->first<<" ";
	vit=vc.begin();cout<<vit->first;
		
} 
