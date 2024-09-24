#include <bits/stdc++.h>
using namespace std;

bool has_distinct_digits(int n) {
    vector<bool> digit_seen(10, false);
    while (n > 0) {
        int digit = n % 10;
        if (digit_seen[digit]) {
            return false;
   
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    return true;
}

int next_distinct(int n) {
    while (!has_distinct_digits(n)) {
        n++;
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    cout << next_distinct(++n) << endl;
    return 0;
}
