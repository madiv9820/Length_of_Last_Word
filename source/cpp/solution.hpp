#define SOLUTION_HPP
#ifdef  SOLUTION_HPP

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        // 🎯 This will store the final result:
        // the length of the last word.
        int lastWordLength = 0;

        // 📏 Get total length of the string.
        int stringLength = s.size();

        int wordIndex = 0;  // 🧩 Tracks how many words we've stored

        // 📦 Create a vector to store all extracted words.
        // Maximum possible words = stringLength
        // (worst case: "a b c d ...")
        vector<string> allWordsInString(stringLength, "");

        // 🚀 Traverse the string character by character.
        for (int currentIndex = 0; currentIndex < stringLength; ) {

            // 🅰️ If current character is NOT a space,
            // we've found the beginning of a word.
            if (s[currentIndex] != ' ') {

                // 🔁 Keep appending characters until
                // we hit a space or end of string.
                while (currentIndex < stringLength &&
                       s[currentIndex] != ' ') {

                    allWordsInString[wordIndex] += s[currentIndex];
                    ++currentIndex;  // ➡ Move forward in string
                }

                // ✅ Word completed, move to next index.
                ++wordIndex;
            }
            else {
                // ⛔ Skip spaces between words.
                ++currentIndex;
            }
        }

        // 📐 The last valid word is stored at (wordIndex - 1).
        // Get its length.
        if (wordIndex > 0) {
            lastWordLength = allWordsInString[wordIndex - 1].size();
        }

        // 🧹 Free memory by swapping with empty vector.
        vector<string>().swap(allWordsInString);

        // 📦 Return the final result.
        return lastWordLength;
    }
};

#endif