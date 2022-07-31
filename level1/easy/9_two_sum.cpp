#include <iostream>
#include <vector>
#include <unordered_map>

/*  TC: O(n^2) MC: O(1)
class Solution {
public:
    std::vector<unsigned int> twoSum(std::vector<int>& nums, int target) {
        std::vector<unsigned int> res;
        for (std::size_t i = 0; i < nums.size() - 1; i++) {
            std::size_t j = i + 1;
            while (j < nums.size()) {
                if (target == nums[i] + nums[j]) {
                    res = {i, j};
                }
                j++;
            }
        }
        return res;
    }
};
*/

// TC: O(1) MC: O(n)
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> table;  // value, index hash-table
        for (int i = 0; i < nums.size(); i++) {
            if (table.find(target - nums[i]) != table.end()) return {table[target - nums[i]], i};
            table[nums[i]] = i;
        }
    }
};
/*
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/

int main(void) {
    auto sol = Solution();
    std::vector<int> v = {3,2,4};
    int target = 6;
    auto res = sol.twoSum(v, target);
    for (const auto& el : res) {
        std::cout << el << " ";
    }
    std::cout << "\n";
}