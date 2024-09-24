#include <bits/stdc++.h>
using namespace std;

string FindOddOneOut(vector<string> &s) {
    int n = s.size();
    if (n < 3) return ""; 
    pair<int, int> majority_pair = {s[0][0] - s[0][1], s[0][1] - s[0][2]};
    int majority_count = 1;
    pair<int, int> odd_pair;
    int odd_index = -1;
    
    for (int i = 1; i < n; i++) {
        pair<int, int> current_diff = {s[i][0] - s[i][1], s[i][1] - s[i][2]};
        if (current_diff == majority_pair) {
            majority_count++;
        } else {
            if (odd_index == -1) {
                odd_pair = current_diff;
                odd_index = i;
            } else if (current_diff != odd_pair) {
                return s[odd_index];
            }
        }
        if (i == 2 && majority_count == 1) {
            swap(majority_pair, odd_pair);
            odd_index = 0;
        }
    }
    return s[odd_index];
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    cout << FindOddOneOut(s) << endl;
    return 0;
}
