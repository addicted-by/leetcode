#include <iostream>
#include <vector>
#include <unordered_map>
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<int, std::size_t> counts;
        for (const auto& el : nums) {
            if (counts[el] >= 1) return true;
            counts[el]++;
        }
        return false;
    }
};


int main(void) {
    auto sol = Solution();
    std::vector<int> v = {1,2,3};
    std::cout << sol.containsDuplicate(v) << "\n";
}