#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--)
    {
        int people, capacity;
        cin >> people >> capacity;
        vector<int> gold(people);
        for(int i=0;i<people;i++){
            cin >> gold[i];
        }
        int robin=0;
        int given=0;
        for(auto p:gold){
            if(p==0 && robin>0){
            given++;
            robin--;
        }
            if(p>=capacity){
                robin+=p;
            }
        }
        cout << given << endl;
    }
    
    return 0;
}
