#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cp = 0;
    int capacity = 0;

    while (n--) {
        int a, b;
        cin >> a >> b;
        cp -= a;
        cp += b;
        capacity = max(capacity , cp);
    }
    
    cout << capacity << endl;
    return 0;
}
