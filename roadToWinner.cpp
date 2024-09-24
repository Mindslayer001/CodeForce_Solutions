#include <bits/stdc++.h>
using namespace std;


int toNum(string num){
    int n=0;
    for(char ch:num){
        n=n*10+(ch-'0');
    }
    return {n? 0:1};
}



int main() {
    string s;
    cin >> s;
    int i=0;
    string ans="";
    while(i<s.length()){
        char ch;
        ch = s[i];
        i++;
        
        string n ="";
        while(i<s.length() && !(s[i]>='A' && s[i]<='Z')){
            n+=s[i];
            i++;
        }
        int num = toNum(n);
        while(num--){
            ans+=ch;
        }
    }
    cout << ans <<endl;
    return 0;
}
