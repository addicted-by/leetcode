#include <iostream>
#include <vector>


class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int pointer1 = m - 1, pointer2 = n - 1, i = m + n - 1;
        while (pointer2 >= 0) {
            if (pointer1 >= 0 && nums1[pointer1] > nums2[pointer2]) {
                nums1[i--] = nums1[pointer1--];
            }
            else {
                nums1[i--] = nums2[pointer2--];
            }
        }
    }
};


/*
Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
Example 2:

Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].
Example 3:

Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
*/


int main(void) {
    auto sol = Solution();
    std::vector<int> v1 = {1,2,3,0,0,0};
    int m = 3; int n = 3;
    std::vector<int> v2 = {2,5,6};
    sol.merge(v1, m, v2, n);
    for (const auto& el : v1) {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}