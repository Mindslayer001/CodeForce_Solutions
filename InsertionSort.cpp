#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cout << "Enter the elements for " << i <<"th position" << endl;
        cin >> v[i];
    }

    for(int i=1;i<n;i++){
        int j = i-1;
        int key = v[i];
        while(j>=0 && v[j]>key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1]=key;
    }

    for(auto num:v) cout << num << " ";
    cout << endl;
    return 0;
}