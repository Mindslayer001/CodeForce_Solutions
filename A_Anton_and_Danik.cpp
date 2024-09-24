#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            c++;
        }
        else{
            c--;
        }
    }
    if(c>0){
        cout << "Anton" <<  endl;
    }
    else if(c < 0){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}
