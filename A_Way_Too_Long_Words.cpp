#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin >> c;
    c+=1;
    while(--c){
        string s;
        cin >> s;
        if(s.length()<=10) cout << s << endl;
        else cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
    }
    return 0;
}