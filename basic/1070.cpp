#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> rope;
	int x;
	for(int i=0;i<n;i++){
	
		cin>>x;
		rope.push_back(x);
	} 
	sort(rope.begin(),rope.end());
	double length=rope[0];//��ʼ����һ��ҪΪ��һ�Σ�����ᱻ����һ�� 
	for(int i=1;i<n;i++){
		
			length+=rope[i];
			length=length/2;
				
	}
	cout<<int(length);
} 
