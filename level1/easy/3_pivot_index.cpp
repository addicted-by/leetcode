#include <iostream>
#include <vector>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int sum = 0;
        for (const auto& el : nums) {
            sum += el;
        }
        int leftSum = 0;
        for (std::size_t i = 0; i < nums.size(); ++i) {
            if (leftSum == sum - nums[i] - leftSum) {
                return i;
            }
            leftSum += nums[i];
        }
        
        return -1;
    }
};


int main(void) {
    auto solution = Solution();
    std::vector<int> nums = {2,1,-1};//{1, 7, 3, 6, 5, 6};
    std::cout << solution.pivotIndex(nums) << std::endl;
}