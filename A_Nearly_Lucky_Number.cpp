#include <iostream>
using namespace std;

bool isLucky(int n){
    if(n==0) return false;
    while(n>0){
        if(n%10!= 4 && n%10!=7){
            return false;
        }
        n/=10;
    }
    return true;
}
int main() {
    string n;
    cin >> n;
    int count=0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            count++;
        }
    }
    if(isLucky(count)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
