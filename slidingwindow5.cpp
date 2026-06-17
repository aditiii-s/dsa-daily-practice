//LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS 
#include <iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int longsubstr(string s)
{
    unordered_map<char,int>mp;
    int low=0;
    int high=0;
    int ans=0;
    while(high<s.length())
    {
        //add current character
        mp[s[high]]++;
        //check if duplicate found 
        while(mp[s[high]]>1) 
        {
            mp[s[low]]--;
            low++;
        }
        ans=max(ans,high-low+1);
        high++;
    }
    return ans;
}
int main()
{
    string s="ababcaabb";
    cout<<longsubstr(s);
    return 0;
}