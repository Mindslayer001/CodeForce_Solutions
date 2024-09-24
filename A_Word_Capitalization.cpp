#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(65 <= int(s[0]) && int(s[0]) <= 90){
        cout << s[0];
    }
    else{
        cout << char(int(s[0])-32);
    }

    for(int i=1;i<s.length();i++){
        cout << s[i];
    }
}