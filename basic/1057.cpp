#include<iostream>
#include<string.h>
using namespace std;
int transfer(int x)
{
    int p=1,y=0,yushu;
    while(1)
    {
        yushu=x%2;
        x/=2;
        y+=yushu*p;
        p*=10;
        if(x<2)
        {
            y+=x*p;
            break;
        }
    }
    return y;
} 
int main(){
	string t;
	getline(cin,t);
	int sum=0;
	for(int i=0;i<t.length();i++){
		if(t[i]>='a'&&t[i]<='z')
		sum+=t[i]-'a'+1;
		if(t[i]>='A'&&t[i]<='Z')
		sum+=t[i]-'A'+1;
	}//cout<<sum;
	int one=0,zero=0;
	while(sum){
        if(sum%2==1)		
            one++;
        else		
            zero++;
        sum = sum/2;
    }
    cout<<zero<<" "<<one;
//	string s="";
//	s+=to_string(transfer(sum)); //to_string暂无法使用 
//	cout<<s; 

}
