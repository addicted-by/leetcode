#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        if (nums.size() == 1) {
            nums[0] *= nums[0];
            return nums;
        }
        std::vector<int> res(nums.size());
        std::size_t left = 0, right = nums.size() - 1;
        std::size_t i = 0;
        while (left < right) {
            if (abs(nums[left]) > abs(nums[right])) {
                res[nums.size() - 1 - i] = nums[left] * nums[left];
                left++;
                i++;
            }
            else {
                res[nums.size() - 1 - i] = nums[right] * nums[right];
                right--;
                i++;
            }
        }
        res[0] = nums[left] * nums[left];
        return res;
    }
};


int main(void) {
    auto sol = Solution();
    std::vector<int> v = {-4,-1,0,3,10};
    auto result = sol.sortedSquares(v);
    for (const auto& el : result) {
        std::cout << el << " ";
    }
}