#include<iostream>
using namespace std;
struct date{
	int year;
	int month;
	int date;
};
struct person{
	string name;
	date birth;
	bool flag;
}per[100002];
bool cmp(date d1,date d2){
	if(d1.year>d2.year)return 1;
	else if(d1.year==d2.year){
		if(d1.month>d2.month)return 1;
		else if(d1.month==d2.month){
			if(d1.date>d2.date)return 1;
		}
	}
	return 0;
}
int main(){
	int n;
	char x;
	cin>>n; 
	if(n>0){
	date today={2014,9,6},early={1814,9,6};
	for(int i=0;i<n;i++){
		cin>>per[i].name;
		cin>>per[i].birth.year;
		cin>>x;
		cin>>per[i].birth.month;
		cin>>x;
		cin>>per[i].birth.date;
		if(cmp(per[i].birth,today)||cmp(early,per[i].birth))
		per[i].flag=0;
		else
		per[i].flag=1;
	}
	date oldest={2014,9,7},youngest={1814,9,5}; 
	string y_name,o_name;
	int count=0; 
	for(int i=0;i<n;i++){
		if(per[i].flag==1){
			count++;
			if(cmp(per[i].birth,youngest)){			
			y_name=per[i].name;
			youngest=per[i].birth;
			}
			if(cmp(oldest,per[i].birth)){			
			o_name=per[i].name;
			oldest=per[i].birth;
			}
		}
	}
	if(count!=0)
	cout<<count<<" "<<o_name<<" "<<y_name;
	else cout<<"0";
	}
} 
