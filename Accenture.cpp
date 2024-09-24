#include <bits/stdc++.h>
using namespace std;
int minimumEnergy(vector<int>& height, int n) {
        if(n==0) return 0;
        if(height.size()==n){
            n--;
        }
        int tj,oj;
        oj = minimumEnergy(height,n-1)+abs(height[n]-height[n-1]);
        if(n>1) {
            tj = minimumEnergy(height,n-2)+abs(height[n]-height[n-2]);
        }
        else { 
            return oj;
        }
        return min(oj,tj);
    }
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    cout << minimumEnergy(v,n) << endl;
    return 0;
}
