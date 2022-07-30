#include <iostream>
#include <vector>

/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
*/


class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        std::size_t l = 0; std::size_t r = nums.size()-1;
        while (r - l > 1) {
            std::cout << "l: " << l << "\nr:" << r << std::endl;
            std::size_t m = (l + r) / 2;
            std::cout << "m: " << m << std::endl;
            if (nums[m] == target) {
                return m;
            }
            else if (nums[m] < target) {
                l = m;
                continue;
            }
            else {
                r = m;
                continue;
            }
        }
        if (nums[l] == target) return l;
        if (nums[r] == target) return r;
        return -1;
    }
};

/*
Examples: 
nums = [-1,0,3,5,9,12], target = 9, ans = 4
nums = [-1,0,3,5,9,12], target = 2, ans = -1
nums = [1,2,5,7,9], target = 7, ans = 3
*/


int main(void) {
    std::vector<int> v = {1,2,5,7,9};
    auto sol = Solution();
    std::cout << sol.search(v, 7);
}