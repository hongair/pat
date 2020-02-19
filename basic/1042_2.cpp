#include <iostream>
#include <string>
using namespace std;
int a[200];
int main(){
	string str;
	int max = 0;
	getline(cin, str);
	
	for(int i = 0; i < str.length(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
		a[str[i]]++;
	} 
	
//	for(int i = 1; i < 200; i++)
//	{
//		cout<<"("<<i<<")"<<a[i]<<" ";
//		if(i % 10 == 0) cout<<endl;
//	}
	for(int i = 97; i <= 122; i++){
		if(a[max] < a[i]){
			max = i;
		}
	}
	char yes = (char)max;
	
	cout<<yes<<" "<<a[max]<<endl;
	return 0;
}

