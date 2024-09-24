#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,l,c=0;
    cin >> t >>l;
    vector<int> v(t);
    for(int i=0;i<t;i++) cin >> v[i];
    for(int i=0;i<t;i++) if(v[i] && v[l-1]<=v[i]) c++;
    cout << c << endl;
}