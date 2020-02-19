#include<stdio.h>
#include<string>
#include<vector>
#include<iostream>
using namespace std;
string str;
int n;
void input(){
	getchar();
	string str_in;
	while(n--)
	{
		getline(cin,str_in);
		if(str_in=="#")
		{
			return ;
		}
		else if(str_in==str)
		{
			cout<<"Welcome in";
			return ;
		}
		else
		{
			cout<<"Wrong password: ";
			cout<<str_in<<endl;
		}
	}
	cout<<"Account locked";
}
int main()
{
	cin>>str>>n;
	input();
	return 0;
}
