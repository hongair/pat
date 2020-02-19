#include<iostream>
#include <string.h>
using namespace std;
int main(){
    char a[101]={0},b[101]={0},num[101]={0},list[14]="0123456789JQK";
    cin>>a>>b;
    int la=strlen(a),lb=strlen(b);

    if (lb<la) {
        memset(num,'0', la-lb);
        lb=la;
    }
    strcat(num,b); // 之后把b接到num后面。

    for (int i = 1; i <= la; i++) { // 加密
        if (i % 2 == 0)
            num[lb-i] = (num[lb-i] - a[la-i] + 10) % 10;
        if (i % 2 == 1)
            num[lb-i] = (a[la-i]-'0' + num[lb-i]-'0') % 13;
    }
    for (int i = 0; i < lb; i++)
        cout<<(i < lb-la ? num[i]:list[num[i]]);

}
