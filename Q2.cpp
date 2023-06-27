#include <iostream>
#include <string>
#include <unordered_map>

int firstUniqChar(const std::string& s) {
    std::unordered_map<char, int> charCount;

    // Count the frequency of each character
    for (char c : s) {
        charCount[c]++;
    }

    // Find the first non-repeating character
    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }

    return -1;  // No non-repeating character found
}

int main() {
    std::string s = "leetcode";
    std::cout << "Input: " << s << std::endl;

    int index = firstUniqChar(s);

    std::cout << "Output: " << index << std::endl;

    return 0;
}
