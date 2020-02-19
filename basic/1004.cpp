#include<iostream>
using namespace std;
struct stu{
	string name;
	string id;
	int grade;
}stu[10000];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stu[i].name>>stu[i].id>>stu[i].grade;
	}
	int max=0,min=101,max_index=0,min_index=0;
	for(int i=0;i<n;i++){
		if(stu[i].grade>max){
			max=stu[i].grade;
			max_index=i;
		}
		if(stu[i].grade<min){
			min=stu[i].grade;
			min_index=i;
		}
	}
	cout<<stu[max_index].name<<" ";
	cout<<stu[max_index].id<<endl;
	
	
	cout<<stu[min_index].name<<" ";
	cout<<stu[min_index].id;
	
}
