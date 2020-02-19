#include<iostream>
using namespace std;
int main(){
	int T,K;
	cin>>T>>K;
	int n1,n2,b,t;
	while(K--){
		bool flag=1;
		while(flag&&K>=0){		
		cin>>n1>>b>>t>>n2;
		if(t>T){
		K--;
		cout<<"Not enough tokens.  Total = "<<T<<"."<<endl;
		}
		else flag=0;
		}
		if(K<0)break;
		if((n2>n1&&b==1)||(n2<n1&&b==0)){//
			T+=t;
			cout<<"Win "<<t<<"!  Total = "<<T<<"."<<endl;
		}
		else if((n2>n1&&b==0)||(n2<n1&&b==1)){//
			T-=t;
			cout<<"Lose "<<t<<".  Total = "<<T<<"."<<endl;		
		if(T<=0){
			cout<<"Game Over.";
			break;
		}
		}
	}
} 
