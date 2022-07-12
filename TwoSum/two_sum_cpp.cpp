using namespace std;
#include <vector>
#include <unordered_map>
#include <iostream>

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hashMap;
        vector<int> output;
        for (size_t i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (hashMap.find(complement) != hashMap.end())
            {
                output.push_back(hashMap[complement]);
                output.push_back(i);
                return output;
            }
            else
            {
                hashMap.insert(make_pair(nums[i], i));
            }
        }
        return output;
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution solution = Solution();
    cout << "[" << solution.twoSum(nums, target)[0] << ", " << solution.twoSum(nums, target)[1] << "]";
}