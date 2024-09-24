#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,h;
    cin >> n >> h;
    vector <int> v(n);
    for(int i=0;i<n;i++){
      cin>> v[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
      if(v[i]>h){
        ans++;
      }
      ans++;
    }
    cout << ans << endl;
    return 0;
}

