#define SOLUTION_HPP
#ifdef  SOLUTION_HPP

#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        // 🎯 Stores the final result:
        // the length of the last word in the string.
        int lastLengthWord = 0;

        // 📏 Start from the end of the string.
        int currentIndex = s.size() - 1;

        // ⛔ Skip any trailing spaces at the end.
        while (currentIndex >= 0 && s[currentIndex] == ' ') {
            --currentIndex;
        }

        // 🔁 Count the characters of the last word until
        // we reach a space or the beginning of the string.
        while (currentIndex >= 0 && s[currentIndex] != ' ') {
            --currentIndex;        // ⬅ Move backward in the string
            ++lastLengthWord;      // ➕ Increment the last word length
        }

        // 📦 Return the length of the last word.
        return lastLengthWord;
    }
};

#endif