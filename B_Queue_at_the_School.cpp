#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int swaps = 0; swaps < k; swaps++)
    {
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                swap(s[i], s[i - 1]);
                i++;
            }
        }
    }

    cout << s << endl;
    return 0;
}
