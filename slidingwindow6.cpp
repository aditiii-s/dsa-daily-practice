//LONGEST SUBSTRING WITH SAME LETTER AFTER REPLACEMENT 
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int charreplacement(string s,int k)//k is here the no that how many times you can replace them
{
    unordered_map<char,int>freq;
    int low=0;
    int maxfreq=0;
    int ans=0;
    for (int high=0;high<s.size();high++)
    {
        //add character
        freq[s[high]]++;
        //update
        maxfreq=max(maxfreq,freq[s[high]]);
        //if replacement needed >k -->shrink window 
         // invalid window
        while((high - low + 1) - maxfreq > k)
        {
            freq[s[low]]--;
            low++;
        }

        ans = max(ans, high - low + 1);
    }
      return ans ;
    }
    int main()
    {
        string s ="AABABBA";
        int k=1;
        cout<<charreplacement(s,k);
        return 0;

    }


