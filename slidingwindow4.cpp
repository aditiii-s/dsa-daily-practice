//FRUIT BASKET PROBLEM 
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int totalfruit(vector<int>&fruit){
    unordered_map<int,int>mp;
    int low=0;
    int high=0;
    int ans=0;
    while(high<fruit.size()){
        //add fruit into window 
        mp[fruit[high]]++;
        //only 2 fruit types are allowed 
        while(mp.size()>2){
            mp[fruit[low]]--;
            if(mp[fruit[low]]==0){
                mp.erase(fruit[low]);
            }
            low++;
        }
        //valid window 
        ans=max(ans,high-low+1);
        high++;
    }
    return ans;
}
int main() {
    vector<int> fruit = {1, 2, 1, 2, 3};

    cout << "Maximum fruits collected: " << totalfruit(fruit) << endl;

    return 0;
}