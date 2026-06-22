//hard qn 
#include<iostream>
#include<string>
#include<unordered_map>
#include<climits>
using namespace std;

string minWindow(string s, string t)
{
    // stores frequency of characters required from t
    unordered_map<char,int> need;

    // stores frequency of characters in current window
    unordered_map<char,int> window;

    // build frequency map of t
    for(char ch : t)
    {
        need[ch]++;
    }

    // number of unique characters that must match
    int required = need.size();

    // number of unique characters currently matched
    int formed = 0;

    int low = 0;

    // stores starting index of answer
    int start = 0;

    // stores length of smallest valid window
    int minLen = INT_MAX;

    // expand the window
    for(int high = 0; high < s.size(); high++)
    {
        char ch = s[high];

        // include current character in window
        window[ch]++;

        // if frequency becomes exactly equal
        // then one character requirement is satisfied
        if(need.count(ch) &&
           window[ch] == need[ch])
        {
            formed++;
        }

        // if all required characters are present
        while(formed == required)
        {
            int currentLen = high - low + 1;

            // update answer if smaller window found
            if(currentLen < minLen)
            {
                minLen = currentLen;
                start = low;
            }

            // remove leftmost character
            char leftChar = s[low];
            window[leftChar]--;

            // if removing it breaks the requirement
            // then window becomes invalid
            if(need.count(leftChar) &&
               window[leftChar] < need[leftChar])
            {
                formed--;
            }

            // shrink window
            low++;
        }
    }

    // no valid window found
    if(minLen == INT_MAX)
    {
        return "";
    }

    // return smallest valid substring
    return s.substr(start, minLen);
}

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout << minWindow(s, t);

    return 0;
}