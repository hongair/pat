#include<iostream>
#include<stack>
using namespace std;
int main(){
	int num_a,num_b;
	char n;
	stack<int> jzb;
	stack<int> a;
	stack<int> b;
	stack<int> res;
	while((n=cin.get())!='\n')
	jzb.push(n-'0');
	while((n=cin.get())!='\n')
	a.push(n-'0');
	while((n=cin.get())!='\n')
	b.push(n-'0');

	int jw=0,c;
	while(!a.empty()&&!b.empty()){
		
		c=a.top()+b.top()+jw;//cout<<c<<" ";
		a.pop();
		b.pop();
		int d=jzb.top();
		if(!d)d+=10;
		res.push(c%d);
		jw=c/d;
		jzb.pop();
	}
	while(!a.empty()){
		c=a.top()+jw;//cout<<c<<" ";
		a.pop();
		int d=jzb.top();
		if(!d)d+=10;
		res.push(c%d);
		jw=c/d;
		jzb.pop();
	}
	while(!b.empty()){
		c=b.top()+jw;//cout<<c<<" ";
		b.pop();
		int d=jzb.top();
		if(!d)d+=10;
		res.push(c%d);
		jw=c/d;
		jzb.pop();
	}
	res.push(jw);
	while(res.size()>1&&res.top()==0)
        res.pop();
	 while(!res.empty()){
	 	cout<<res.top();
	 	res.pop();
	 } 

} 
