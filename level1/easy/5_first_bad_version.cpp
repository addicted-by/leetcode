#include <iostream>
#include <vector>


std::vector<bool> versions = {false, false, false, true, true, true, true};


bool isBadVersion(int n) {
    return versions[n];
}


class Solution {
public:
    int firstBadVersion(int n) {
        std::size_t l = 1; std::size_t r = n;
        long int res = n;
        while (l <= r) {
            auto m = l + (r - l) / 2;
            if (isBadVersion(m)) {
                res = m;
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        return res;
    }
};

int main(void) {
    auto sol = Solution();
    std::cout << sol.firstBadVersion(5) << std::endl;
}