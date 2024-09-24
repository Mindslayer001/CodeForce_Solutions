#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        cin >> a >> b;
        if(n==2 && abs(a-b)!=1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}