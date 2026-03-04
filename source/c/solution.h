#define SOLUTION_H
#ifdef SOLUTION_H

#include <string.h>

int lengthOfLastWord(char* s) {
    // 🎯 Stores the final result:
    // the length of the last word in the string.
    int lastLengthWord = 0;

    // 📏 Start from the end of the string.
    int currentIndex = strlen(s) - 1;

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

#endif