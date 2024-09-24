#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<int> v;
    int c=0;
    for(int i=0;i<s.length();i+=2){
        v.push_back(s[i] - '0');
        c++;
    }  
    sort(v.begin(),v.end());
    for(int i=0;i<c;i++){
        if(i==c-1){
            cout << v[i] << endl;
        }
        else cout << v[i] << '+';
    }
    return 0;
}