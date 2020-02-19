#include<iostream>
using namespace std;
int main(){
	int count[127]={0};
	char c;
	int time=2;
	while(time--){
		while((c=getchar())!='\n'){
			if(count[c]==0){
				count[c]=1;
				cout<<c;
			}
		}
	}
} 
