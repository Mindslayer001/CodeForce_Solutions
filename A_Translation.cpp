#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    if(s1.length() != s2.length()){
        cout << "NO" << endl;
        return 0;
    }
    int i=0;
    int n = s2.length()-1;
    while(i<s1.length()){
        if (s1[i] != s2[n-i]){
            cout << "NO" << endl;
            return 0;
        }
        i++;
    }
    cout << "YES" << endl;
    return 0;
}