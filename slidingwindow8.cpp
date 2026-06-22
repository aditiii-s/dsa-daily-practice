//minimum subarray whose sum is greater than and equal to given target #include<iostream>
#include<vector>
#include <iostream>
#include<climits>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums)
{
    int low = 0;          // left side of window
    int sum = 0;          // current window sum
    int ans = INT_MAX;    // stores minimum length found so far

    // expand window by moving high
    for(int high = 0; high < nums.size(); high++)
    {
        // include current element in window
        sum += nums[high];

        // if window sum becomes valid
        while(sum >= target)
        {
            // calculate current window length
            int len = high - low + 1;

            // store smaller answer if found
            ans = min(ans, len);

            // remove leftmost element
            // because we want a smaller window
            sum -= nums[low];

            // move left pointer forward
            low++;
        }
    }

    // if no valid subarray was found
    if(ans == INT_MAX)
    {
        return 0;
    }

    return ans;
}

int main()
{
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;

    cout << minSubArrayLen(target, nums);

    return 0;
}