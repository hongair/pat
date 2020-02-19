#include<iostream>
#include<string.h>
#include<typeinfo>
using namespace std;
int main(){
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	//a="ABCD";b="CDEF";c="asd";d="1sd"; 
	a+=b;
	char day,hour;
	unsigned int i,j,index,index1;
	int flag=1;
	for(i=0;i<a.length()&&flag==1;i++){
		for(j=i+1;j<a.length();j++){
			
		if(a[j]==a[i]&&a[j]<='G'&&a[j]>='A'){	
			day=a[j];
			index1=i;
			flag=0;
		}
	}
	}
	for(i=index1+1;i<a.length();i++){
		for(j=i+1;j<a.length();j++){//cout<<"a[i]:"<<a[i]<<" "<<"a[j]:"<<a[j]<<endl; 
		if(a[i]==a[j]&&a[j]<='G'&&a[j]>='A'){	
			hour=a[j];
			break;
		}
	}
	}//cout<<day<<hour;
	for(i=0;i<c.length();i++){
		for(j=i+1;j<c.length();j++){
		if(c[j]==c[i]){
			index=j;
			break;
		}
	}
	}
	switch(day){
		case 'A':cout<<"MON"<<" ";break; 
		case 'B':cout<<"TUE"<<" ";break; 
		case 'C':cout<<"WED"<<" ";break; 
		case 'D':cout<<"THU"<<" ";break; 
		case 'E':cout<<"FRI"<<" ";break; 
		case 'F':cout<<"SAT"<<" ";break; 
		case 'G':cout<<"SUN"<<" ";break; 
	}
	if(hour>='0'&&hour<='9')cout<<hour<<":";
	else{	
	switch(hour){
		case 'A':cout<<10<<":";break; 
		case 'B':cout<<11<<":";break; 
		case 'C':cout<<12<<":";break; 
		case 'D':cout<<13<<":";break; 
		case 'E':cout<<14<<":";break; 
		case 'F':cout<<15<<":";break; 
		case 'G':cout<<16<<":";break; 
		case 'H':cout<<17<<":";break; 
		case 'I':cout<<18<<":";break; 
		case 'J':cout<<19<<":";break; 
		case 'K':cout<<20<<":";break; 
		case 'L':cout<<21<<":";break; 
		case 'M':cout<<22<<":";break; 
		case 'N':cout<<23<<":";break; 
	}}
	if(index>10)cout<<index;
	else cout<<"0"<<index;
	
}
