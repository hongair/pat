#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
struct{
	double price;
	double num;
	double a_price;
}mooncake[1002];
int main(){
	int n,sum;
	cin>>n>>sum;
	for(int i=0;i<n;i++){
		cin>>mooncake[i].num;
	}
	for(int i=0;i<n;i++){
		cin>>mooncake[i].price;
		mooncake[i].a_price=mooncake[i].price/mooncake[i].num;
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(mooncake[j].a_price<mooncake[j+1].a_price){
				swap(mooncake[j+1].a_price,mooncake[j].a_price);
				swap(mooncake[j+1].price,mooncake[j].price);
				swap(mooncake[j+1].num,mooncake[j].num);
			}
		}
	} 
	double profit=0;
	//int flag=1;
	for(int i=0;i<n;i++){
		if(sum-mooncake[i].num>=0){
		sum-=mooncake[i].num;
		profit+=mooncake[i].price;
	}
	else{
		profit+=sum*mooncake[i].a_price;
		break;
	}
	} 
	//profit+=0.005;
	cout<<fixed<<setprecision(2)<<profit;
	
} 
