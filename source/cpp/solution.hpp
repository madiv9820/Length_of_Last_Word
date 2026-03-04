#define SOLUTION_HPP
#ifdef  SOLUTION_HPP

#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        // 🎯 This will store the final result:
        // the length of the last valid word found.
        int lastWordLength = 0;

        // 📏 Tracks the length of the word we are currently reading.
        int currentWordLength = 0;

        // 🚶 Walk through the string character by character.
        for (int currentIndex = 0; currentIndex < s.size(); ++currentIndex) {

            // 🅰️ If the current character is NOT a space,
            // we are inside a word → increase its length.
            if (s[currentIndex] != ' ') {
                currentWordLength += 1;
            }
            else {
                // ⛔ We hit a space → the current word (if any) has ended.
                // If we were actually building a word,
                // update lastWordLength.
                lastWordLength = (currentWordLength != 0)
                                    ? currentWordLength
                                    : lastWordLength;

                // 🔄 Reset current word length for the next word.
                currentWordLength = 0;
            }
        }

        // 🏁 After the loop, we might still be inside a word
        // (e.g., the string does not end with a space).
        // So we perform one final update.
        lastWordLength = (currentWordLength != 0)
                            ? currentWordLength
                            : lastWordLength;

        // 📦 Return the length of the last word.
        return lastWordLength;
    }
};

#endif