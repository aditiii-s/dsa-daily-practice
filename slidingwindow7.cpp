//max consecutive ones 3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestOnes(vector<int>& nums, int k)
{
    int low = 0;
    int zeroCount = 0;
    int ans = 0;

    for(int high = 0; high < nums.size(); high++)
    {
        if(nums[high] == 0)
        {
            zeroCount++;
        }

        while(zeroCount > k)
        {
            if(nums[low] == 0)
            {
                zeroCount--;
            }

            low++;
        }

        ans = max(ans, high - low + 1);
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0 or 1): ";
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    cout << "Maximum consecutive 1's = "
         << longestOnes(nums, k);

    return 0;
}