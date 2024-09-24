#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double ratio = static_cast<double>(b) / a;
    double logBase = log(3.0 / 2.0);
    double result = log(ratio) / logBase;
    int years = static_cast<int>(result);
    cout << years+1 << endl;
    return 0;
}
