#include <bits/stdc++.h>
using namespace std;
int minOps(int n ,int maxF, int operations){
    operations++;
    if(2*maxF>=n){
        return operations+min(maxF,n-maxF);
    }
    return minOps(n,2*maxF,operations+maxF*2);

}
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxF = 0;
        unordered_map<int,int> v;
        for(int i=0;i<n;i++){
            v[a[i]]++;
            maxF = max(maxF,v[a[i]]);
        }
        cout << minOps(a.size(),maxF, 0) << endl;
    }

    return 0;
}
