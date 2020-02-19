#include<iostream>
#include<math.h>
using  namespace std;
struct Card{
	int front;
	int back;
	int dif;
}card[10000];
int main(){
	int n;
	cin>>n;
	int time[10000]={0};
	for(int i=1;i<=n;i++){
		card[i].front=i;
		cin>>card[i].back;
		card[i].dif=abs(card[i].back-card[i].front);//cout<<card[i].dif<<endl;
		time[card[i].dif]++;
	}
	
	for(int i=10000-1;i>=0;i--){
		if(time[i]>1){ 				//是大于1，非大于0，因为是算重复的 
			cout<<i<<" "<<time[i]<<endl;
		}
	}
}
