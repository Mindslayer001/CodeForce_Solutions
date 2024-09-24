#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int c=0;
    for(char a: s){
        if(a<97) c++;
    }

    if(s.length()<2*c){
        for(char a:s){
            cout << (char)toupper(a);
        }
    }
    else{
        for(char a:s){
            cout << (char)tolower(a);
        }
    }
    cout << endl;

}
