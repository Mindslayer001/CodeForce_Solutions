#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; 
    cin >> s;
    unordered_map<string,int> m;
    for(int i=0;i<s.length()+1;i++){
        m[s.substr(i)]= i;
    }
    vector<string> v;
    for(auto c:m) v.push_back(c.first);
    sort(v.begin(),v.end());
    for(auto c:v) cout << m[c] << " ";
    return 0;
}


