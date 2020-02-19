#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int N;
    cin>>N;
    double x,sum=0;
    for(int i=0;i<N;i++){
        cin>>x;
        sum+=(i+1)*x*(N-i);
    }
    cout<<fixed<<setprecision(2)<<sum;
}
