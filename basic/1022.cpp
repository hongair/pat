#include<iostream>
using namespace std;
int main(){
	long long int x,y,m;
	cin>>x>>y>>m;
	long long int n=x+y;
	int ans[31], num = 0;   

    do{     
        ans[num++] = n % m;
        n /= m;
    } while(n != 0);	
		for(int i=num-1;i>=0;i--){
		cout<<ans[i];
		}
		
	
}
