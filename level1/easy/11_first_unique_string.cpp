#include <iostream>
#include <vector>
#include <sstream>
#include <string> 
#include <unordered_map>


class Solution {
public:
    int firstUniqChar(std::string s) {
        std::stringstream ss(s);
        char c;
        std::unordered_map<char, unsigned int> table;
        while (ss >> c) {
            table[c]++;
        }
        for (std::size_t i = 0; i < s.size(); ++i) {
            if (table[s.at(i)] == 1) return i;
        }
        return -1;
    }
};

/*
Example 1:

Input: s = "leetcode"
Output: 0

Example 2:

Input: s = "loveleetcode"
Output: 2

Example 3:

Input: s = "aabb"
Output: -1
*/
int main(void) {
    auto sol = Solution();
    std::string s = "aabb";
    std::cout << sol.firstUniqChar(s) << std::endl;
}