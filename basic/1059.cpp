#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int f(int i){
	int j=0;
    for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
        {
            return 0; 
        }
    }
    return 1;
}
int main(){
	int n,k;
	cin>>n;
	string list[10002];
	int output[10002]={0};
	for(int i=0;i<n;i++){
		cin>>list[i];
	}
	cin>>k;
	string s;
	string t;
	for(int i=0;i<k;i++){
		cin>>t;
		int flag=0;
		for(int j=0;j<n;j++){
			const char* c1 ;
			c1= list[j].c_str(); 
			const char* c2 ;
			c2= t.c_str();  
		if(strcmp(c1,c2)==0){//cout<<"c1:"<<c1<<" c2:"<<c2<<endl;
			if(output[j]==1){
				if(i!=k-1) 
			cout<<t<<": "<<"Checked"<<'\n';
			else cout<<t<<": "<<"Checked";
			
			}
			else{
			
			if(j==0){
				s="Mystery Award";
				output[j]=1;
			}
			else if(f(j+1)){
				s="Minion";
				output[j]=1;
			}
			else{
				s="Chocolate";
				output[j]=1;
			}
			if(i!=k-1) 
			cout<<t<<": "<<s<<'\n';
			else cout<<t<<": "<<s;
		}
		
		flag=1;
		}
		}
		if(flag==0){
			s="Are you kidding?";
			if(i!=k-1) 
			cout<<t<<": "<<s<<'\n';
			else cout<<t<<": "<<s;
		}
		
	}
	
}
