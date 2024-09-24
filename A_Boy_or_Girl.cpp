#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<char> dc;
    for(auto c:s) dc.insert(c);
    if(dc.size()&1) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;
    return 0;
}