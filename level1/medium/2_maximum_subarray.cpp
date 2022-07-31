#include <iostream>
#include <vector>


/*
O(n^2)

class Solution {
public:
    int maxSubArray(const std::vector<int>& nums) {
        long long max = nums[0];
        for (std::size_t i = 0; i < nums.size(); i++) {
            long long sum = nums[i];
            if (sum > max) {
                    max = sum;
                }
            std::size_t j = i + 1;
            while (j < nums.size()) {
                sum += nums[j];
                if (sum > max) {
                    max = sum;
                }
                j++;
            }
        }
        return max;
    }
};

*/


class Solution {
public:
    int maxSubArray(const std::vector<int>& nums) {
        if (nums.size() ==  1) return nums[0];
        long long max = nums[0];
        long long sum = max;
        for (std::size_t i = 1; i < nums.size(); i++) {
            if (sum < 0) sum = 0;
            sum += nums[i];
            if (sum > max) max = sum;
        }
        return max;
    }
};

/*
Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
*/


int main(void) {
    auto sol = Solution();
    std::vector<int> v = {5,4,-1,7,8};
    std::cout << sol.maxSubArray(v) << "\n";
}