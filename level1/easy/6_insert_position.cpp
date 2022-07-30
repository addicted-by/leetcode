#include <iostream>
#include <vector>


class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        std::size_t left = 0; std::size_t right = nums.size() - 1;
        std::size_t mid = 0;
        if (nums[left] > target) return 0;
        if (nums[right] < target) return nums.size();
        while (right - left > 1) {
            mid = left + (right - left)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) {
                left = mid;
            }
            else {
                right = mid;
            }
            std::cout << "left: " << left << "\nright: " << right << "\nmiddle: " << mid << "\n";
        }
        if (nums[left] == target) return left;
        if (nums[right] == target) return right;
        return mid;
    }
};

int main(void) {
    std::vector<int> v = {1,3,5,6};
    auto sol = Solution();
    std::cout << sol.searchInsert(v, 7) << std::endl;
}