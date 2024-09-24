#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,m,b;
    cin >> c >> m >> b;
    if(m<(c*((b*(b+1))/2))) {
        cout << (c*((b*(b+1))/2))-m << endl;
    }
    else cout << 0 << endl;
    return 0;
}