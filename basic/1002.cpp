#include<iostream>
using namespace std;
int main(){
	char num[101];
	cin>>num;
	int sum=0;
	int i;
	for(i=0;num[i]!='\0';i++){
		sum+=num[i]-'0';
	}
	char pin[10][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    if(sum>99)
    {
        cout<<pin[sum/100]<<" ";
        cout<<pin[sum%100/10]<<" ";
        cout<<pin[sum%100%10];
    }
	else if(sum>9)
    {
        cout<<pin[sum/10]<<" ";
        cout<<pin[sum%10];
    }
	else{
        cout<<pin[sum];
    }
}
