#include <iostream>
#include <vector>


class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        for (std::size_t i=1; i < nums.size(); ++i) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
};

int main() {
    auto solution = Solution();
    std::vector<int> nums = {3, 1, 2, 10, 1};
    auto res = solution.runningSum(nums);
    for (const auto& i : res) {
        std::cout << i << " ";
    }
    return 0;
}