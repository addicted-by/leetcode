#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class Solution {
public:
    int mostWordsFound(std::vector<std::string>& sentences) {
        unsigned int maximum = 0;
        for (const auto& str: sentences) {
            std::stringstream stream(str);
            int cur_max = 0;
            std::string word;
            while (stream >> word) {
                cur_max++;
            }
            if (cur_max > maximum) {
                maximum = cur_max;
            }
        }
        return maximum;
    }
};



int main(void) {
    std::vector<std::string> check = {"please wait", 
                                            "continue to fight", 
                                            "continue to win"};
    auto solution = Solution();
    std::cout << solution.mostWordsFound(check);
}