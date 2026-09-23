#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string sortVowels(string s)
    {
        string vowels = "";
        for (char c : s)
        {
            if (isVowel(c))
            {
                vowels += c;
            }
        }

        sort(vowels.begin(), vowels.end());

        string res = "";
        int j = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (isVowel(s[i]))
            {
                res += vowels[j++];
            }
            else
            {
                res += s[i];
            }
        }
        return res;
    }
};

int main()
{
    Solution sol;
    cout << sol.sortVowels("lEetcOde") << endl; // Output: lEOtcede
    cout << sol.sortVowels("lYmpH") << endl;    // Output: lYmpH
    return 0;
}
