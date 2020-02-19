#include<iostream>
#include <string>
using namespace std;
int count[2000]={0};
int main(){
	string a;
	getline(cin,a);
	for(int i=0;i<a.length();i++){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]+=32;
		}
		count[a[i]]++;
	}
	int max=0,max_index=0;
	for(int i=97;i<123;i++){
		if(count[i]>max){
			max=count[i];
			max_index=i;
		}
	}
	char x=(char)max_index;
	cout<<x<<" "<<max;
} 
