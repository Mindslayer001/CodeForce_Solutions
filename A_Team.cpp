#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,count=0;
    cin >> c;
    while(c--){
        int a,b,c;
        cin >> a>> b >> c;
        if(a+b+c>=2) count++;
    }
    cout << count;
    return 0;
}