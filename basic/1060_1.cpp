#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int num[100000];
	cin>>n; 
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n);
	int half=n/2,e=0,i;
	if(num[half]>half){
		 for(i=half-1;i>=0;--i) 
            if(num[i]<=(n-i)) break;
        e=n-i-1;
	}
	else {  
        for(i=half+1;i<n;++i) 
            if(num[i]>(n-i)){
                e=n-i;
                break;
            }               
    }   

	cout<<e;
} 
