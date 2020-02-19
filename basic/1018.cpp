#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	int jia[3]={0};//胜平负 
	int yi[3]={0};
	int count1[3]={0};//胜次数 b c j
	int count2[3]={0};
	while(n--){
		char s1,s2;
		cin>>s1>>s2;
		if(s1=='C'){			
			if(s2=='C'){
				jia[1]++;
				yi[1]++;
			}
			if(s2=='J'){
				jia[0]++;
				yi[2]++;
				count1[1]++;
			}
			if(s2=='B'){
				jia[2]++;
				yi[0]++;
				count2[0]++;
			}
		}
		if(s1=='B'){
			if(s2=='B'){
				jia[1]++;
				yi[1]++;
			}
			if(s2=='C'){
				jia[0]++;
				yi[2]++;
				count1[0]++;
			}
			if(s2=='J'){
				jia[2]++;
				yi[0]++;
				count2[2]++;
			}
		}
		if(s1=='J'){
			if(s2=='J'){
				jia[1]++;
				yi[1]++;
			}
			if(s2=='B'){
				jia[0]++;
				yi[2]++;
				count1[2]++;
			}
			if(s2=='C'){
				jia[2]++;
				yi[0]++;
				count2[1]++;
			}
		}
	} 
	for(int i=0;i<3;i++){
		if(i!=2){
			cout<<jia[i]<<" ";
		}
		if(i==2){
			cout<<jia[i];
		}
	}
	
	cout<<endl;
	for(int i=0;i<3;i++){
		if(i!=2){
			cout<<yi[i]<<" ";
		}
		if(i==2){
			cout<<yi[i];
		}
	}
	cout<<endl;
	int max1=0,max1_index=0,max2=0,max2_index=0;
	for(int i=0;i<3;i++){
		if(count1[i]>max1){		
		max1=count1[i];
		max1_index=i;
		}
		if(count2[i]>max2){		
		max2=count2[i];
		max2_index=i;
		}
	}
	switch(max1_index){
		case 0:
				cout<<"B"<<" ";break;
		case 1:
				cout<<"C"<<" ";break;
		case 2:
				cout<<"J"<<" ";break;
	}
	switch(max2_index){
		case 0:
				cout<<"B";break;
		case 1:
				cout<<"C";break;
		case 2:
				cout<<"J";break;
	}
	
} 
