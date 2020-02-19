#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
vector<ll> num;
int max(int value1, int value2){
    return ( (value1 > value2) ? value1 : value2);
}
int main(){
	ll n,p,t;
	cin>>n>>p;
	for(ll i=0;i<n;i++){
		cin>>t;
		num.push_back(t);
	}
	sort(num.begin(),num.end());
	ll ans=1;
	for(ll j=num.size()-1;j>=0;j--)
    {
        for(ll i = j-ans+1;i>=0;i--)
        {
            if(num[j]*1.0/num[i]>p)
            {
                break;
            }
            ans=max(ans,j-i+1);
        }
    }
    cout<<ans;

}
