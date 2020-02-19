#include<iostream>
#include<map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctype.h>
using namespace std;
typedef struct message{
	int order;
	int count;
	double goal;
}message;
bool cmp(pair<string,message> a, pair<string,message> b)
{
    if(floor(a.second.goal) == floor(b.second.goal))
    {
        if(a.second.count == b.second.count)
            return a.first < b.first;
        else
            return a.second.count < b.second.count;
    }
    else
        return a.second.goal > b.second.goal;
}
int main(){
	int n;
	double s_goal;
	cin>>n;
	map<string,message> school;
	string id,name; 
	for(int i=0;i<n;i++){
		cin>>id>>s_goal>>name;
		string lower=name;
		transform(lower.begin(),lower.end(),lower.begin(),::tolower);
		school[lower].count++;
		if(id[0]=='B'){
			school[lower].goal+=s_goal/1.5;
		}
		if(id[0]=='A'){
			school[lower].goal+=s_goal;
		}
		if(id[0]=='T'){
			school[lower].goal+=s_goal*1.5;
		}
	}
	vector<pair<string, message>> v(school.begin(), school.end());
    sort(v.begin(), v.end(), cmp);
    v[0].second.order = 1;
    cout << v.size() << endl << v[0].second.order << " " << v[0].first << " " << (int)floor(v[0].second.goal) << " " << v[0].second.count << endl;
    for(int i = 1; i < v.size(); i++)
    {
        if(floor(v[i].second.goal) == floor(v[i - 1].second.goal))
            v[i].second.order = v[i - 1].second.order;
        else
            v[i].second.order = i + 1;
        cout << v[i].second.order << " " << v[i].first << " " << (int)floor(v[i].second.goal) << " " << v[i].second.count << endl;
    }

} 
