#include <bits/stdc++.h>
using namespace std;

int minRemoval(string input1) {
    int operations = 0;
    int count = 0; // To count consecutive 'P's

    // Traverse the string
    for (int i = 0; i < input1.length(); i++) {
        if (input1[i] == 'p' || input1[i] == 'p') {  // Check for 'P' or 'p'
            count++;
        } else {
            count = 0; // Reset the count if we hit a non-'P' character
        }

        // If we have found three consecutive 'P's
        if (count == 3) {
            operations++;  // Perform an operation to remove 3 'P's
            count = 0;     // Reset count after removing
        }
    }

    // If any leftover 'P's remain, they'll need one more operation
    if (count > 0) {
        operations++;
    }

    return operations;
}

int main() {
    string s;
    cin >> s;
    cout << minRemoval(s) << endl;
    return 0;
}
