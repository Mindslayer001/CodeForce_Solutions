#include <iostream>
#include <string>
using namespace std;

// Function to generate the string of length n with minimal palindromic subsequences
string generateString(int n) {
    // Patterns to use
    string patterns[5] = {"uo", "iae", "oeiiua", "uoiea", "aeiou"};

    // Select the appropriate pattern based on length
    // The pattern index can be adjusted to fit the given length requirements
    int patternIndex = (n - 1) % 5;
    string basePattern = patterns[patternIndex];
    
    // Generate the required length string by repeating and cutting the base pattern
    string result = basePattern;
    while (result.size() < n) {
        result += basePattern;
    }
    return result.substr(0, n);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << generateString(n) << endl;
    }
    
    return 0;
}
