#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i].first >> v[i].second;
        }
        int fn = v[0].first;
        int sn = v[0].second;
        int w=fn-1;
        bool ans=true;
        for(int i=1;i<n;i++){
            int s = v[i].first;
            int e = v[i].second;
            if(fn<=s){
                if(sn<=e){
                    ans = false;
                    break;
                }
                else{
                    w=fn-1;
                }
            }
        }
        if(ans) cout << w << endl;
        else cout << -1 << endl;
    }
    return 0;
}
