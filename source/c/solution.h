#define SOLUTION_H
#ifdef SOLUTION_H

int lengthOfLastWord(char* s) {
    // 🧮 This will store the final answer:
    // the length of the last word we encounter.
    int lastWordLength = 0;

    // 📏 Tracks the length of the current word we’re reading.
    int currentWordLength = 0;

    // 🔎 Used to walk through the string character by character.
    int currentIndex = 0;
    
    // 🚶 Iterate through the string until we hit the null terminator ('\0')
    for (; s[currentIndex] != '\0'; ++currentIndex) {

        // 🅰️ If the current character is NOT a space,
        // we are inside a word → increase current word length.
        if (s[currentIndex] != ' ') {
            currentWordLength += 1;
        }
        else {
            // ⛔ If we hit a space, the current word has ended.
            // If we were actually building a word (length != 0),
            // update lastWordLength.
            lastWordLength = (currentWordLength != 0) 
                                ? currentWordLength 
                                : lastWordLength;

            // 🔄 Reset for the next potential word.
            currentWordLength = 0;
        }
    }

    // 🏁 After the loop ends, we may still be inside a word
    // (e.g., string does not end with a space).
    // So we do one final update.
    lastWordLength = (currentWordLength != 0) 
                        ? currentWordLength 
                        : lastWordLength;
    
    // 🎯 Return the length of the last word found.
    return lastWordLength;
}

#endif