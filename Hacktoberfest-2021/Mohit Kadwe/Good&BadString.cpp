#include <iostream>
using namespace std;

int isGoodorBad(string s)
{
    int c = 0;
    int v = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            c = 0;
            v++;
            if (v > 5)
                return 0;
        }
        else if (s[i] == '?')
        {
            c++;
            v++;
            if (v > 5)
                return 0;
            if (c > 3)
                return 0;
        }
        else
        {
            v = 0;
            c++;
            if (c > 3)
                return 0;
        }
    }
    return 1;
}

int main()
{
    string s;
    cin >> s;
    cout << isGoodorBad(s);
    return 0;
}

// output
// input - mohit
// output - 1

// input - hhhhkkkiiihhh
// output - 0
