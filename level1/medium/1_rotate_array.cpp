#include <iostream>
#include <vector>


class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        k %= nums.size();
        if (nums.size() == 1 || k == 0) return;
        std::size_t l = 0, r = nums.size() - 1;
        while (l < r) {
            auto tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
            l++;
            r--;
        }
        l = 0; r = k-1;
        while (l < r) {
            auto tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
            l++;
            r--;
        }
        l = k; r = nums.size() - 1;
        while (l < r) {
            auto tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
            l++;
            r--;
        }
    }
};

/*
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
*/

int main(void) {
    auto sol = Solution();
    std::vector<int> v = {1,2};
    sol.rotate(v, 2);
    for (const auto& el : v) {
        std::cout << el << " ";
    }
}