#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count=0;
    string ans="";
   for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            count++;
        }
        if(i==s.length()-1 || s[i] == '0'){
            ans+= (count-1) + 'A';
            count =0;
        }
    }
    cout << ans << endl;
    return 0;
}