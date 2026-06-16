//LONGEST SUBSTRING WITH K DISTINCT CHARACTERS 
#include<iostream>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;
int longsubstringkdistinct(string s ,int k){
    unordered_map<char,int>mp;
    int low=0;
    int high =0;
    int ans= -1;//if no valid substring is present
    
    while(high<s.length()){
        //add characters to window 
        mp[s[high]]++;
        //we have to fire now when the characters got greater than k check the condition first 

        while(mp.size()>k){
            
            //low++ remove charachters or can say firing starts 
            mp[s[low]]--;
            if(mp[s[low]]==0){
                mp.erase(s[low]);
            }
            low++;

        }
        //if window has exactly k charachters 
        if(mp.size()==k){
            ans=max(ans,high-low+1);
        }
        high++;

    }
    return ans;
}
int main(){
    cout<<longsubstringkdistinct("aabcaa",2);

    return 0;
}