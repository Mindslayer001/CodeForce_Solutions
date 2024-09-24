#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int m=a*b;
        int added=0;
        while(m>c*c){
            c+=1;
            added++;
        }
        cout << added << endl;

	}
    return 0;
}
