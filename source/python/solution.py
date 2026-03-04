class pySolution:
    def py_lengthOfLastWord(self, s: str) -> int:
        # 🎯 This will store the final answer:
        # the length of the last word found in the string.
        lastWordLength: int = 0

        # 📏 Tracks the length of the current word we’re building.
        currentWordLength: int = 0

        # 🚶 Iterate through the string character by character.
        for currentIndex in range(len(s)):

            # 🅰️ If the current character is NOT a space,
            # we are inside a word → increase its length.
            if s[currentIndex] != ' ':
                currentWordLength += 1
            else:
                # ⛔ We hit a space → the current word (if any) has ended.
                # Only update lastWordLength if we actually built a word.
                lastWordLength = (
                    currentWordLength 
                    if currentWordLength != 0 
                    else lastWordLength
                )

                # 🔄 Reset current word length for the next word.
                currentWordLength = 0

        # 🏁 After finishing the loop, we might still be inside a word
        # (if the string doesn’t end with a space).
        # So we do one final update.
        lastWordLength = (
            currentWordLength 
            if currentWordLength != 0 
            else lastWordLength
        )

        # 📦 Return the length of the last word.
        return lastWordLength