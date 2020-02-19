#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,x;
	int a1=0,a2=0,a3=0,a4=0,a5=0,c_2=1,c_4=0,c_5=0;
	cin>>n;
	while(n--){
		cin>>x;
		if(x%5==0&&x%2==0){
			a1+=x;
		}
		if(x%5==1){
			if(c_2%2==1)
			a2+=x;
			if(c_2%2==0)
			a2-=x;
			c_2++;
		}
		if(x%5==2){
			a3++;
		}
		if(x%5==3){
			a4+=x;
			c_4++;
		}
		if(x%5==4){
			if(x>a5){			
			a5=x;
			c_5++;
			}
		}
	}
	if(a1==0)
		cout<<"N"<<" ";
	else 
		cout<<a1<<" ";
	if(c_2<=1)//若判断a2是否为0，则当a2经计算后仍为0时输出错误 
		cout<<"N"<<" ";
	else 
		cout<<a2<<" ";
	if(a3==0)
		cout<<"N"<<" ";
	else 
		cout<<a3<<" ";
	
	if(a4==0||c_4==0)
		cout<<"N"<<" ";
	else
		cout<<fixed<<setprecision(1)<<(double)a4/c_4<<" ";
		
	if(c_5==0)
		cout<<"N";
	else 
		cout<<a5;
	
} 
