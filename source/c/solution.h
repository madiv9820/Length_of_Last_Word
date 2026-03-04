#define SOLUTION_H
#ifdef SOLUTION_H

#include <stdlib.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    // 🎯 Stores the final result:
    // length of the last word in the string.
    int lastWordLength = 0;

    // 📏 Calculate total length of input string.
    int stringLength = strlen(s);

    // 📦 Allocate an array of character pointers.
    // Maximum possible words = stringLength
    // (example worst case: "a b c d e ...")
    char **allWordsInString = 
        (char**) malloc((stringLength + 1) * sizeof(char*));

    int wordIndex = 0;          // 🧩 Index of current word
    int currentWordIndex = 0;   // ✍️ Position inside current word
    int currentIndex = 0;       // 🚶 Traverses original string

    // 🏗 Allocate memory for each potential word.
    // Each word can be at most stringLength characters long.
    for (; wordIndex < stringLength; ++wordIndex) {
        allWordsInString[wordIndex] = 
            malloc((stringLength + 1) * sizeof(char));
    }

    // 🔄 Reset wordIndex to start storing from beginning.
    wordIndex = 0;

    // 🚀 Traverse the string character by character.
    while (s[currentIndex] != '\0') {

        // 🅰️ If current character is NOT a space,
        // we've found the beginning of a word.
        if (s[currentIndex] != ' ') {

            // 🔁 Copy characters until we hit
            // a space or end of string.
            while (s[currentIndex] != '\0' &&
                   s[currentIndex] != ' ') {

                allWordsInString[wordIndex][currentWordIndex] =
                    s[currentIndex];

                ++currentIndex;      // ➡ Move forward in string
                ++currentWordIndex;  // ➡ Move forward in word
            }

            // 🏁 Null-terminate the extracted word.
            allWordsInString[wordIndex][currentWordIndex] = '\0';

            // 🔄 Prepare for next word.
            currentWordIndex = 0;
            ++wordIndex;
        }
        else {
            // ⛔ Skip spaces between words.
            ++currentIndex;
        }
    }

    // 📐 The last valid word is at index (wordIndex - 1).
    // Compute its length safely.
    if (wordIndex > 0) {
        lastWordLength = strlen(allWordsInString[wordIndex - 1]);
    }

    // 🧹 Free allocated memory to avoid leaks.
    for (int i = 0; i < stringLength; ++i) {
        free(allWordsInString[i]);
    }

    free(allWordsInString);

    // 📦 Return final result.
    return lastWordLength;
}

#endif