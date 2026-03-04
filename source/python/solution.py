class pySolution:
    def py_lengthOfLastWord(self, s: str) -> int:
        # 🎯 Stores the final result: length of the last word
        lastWordLength: int = 0

        # 📏 Start from the end of the string
        currentIndex: int = len(s) - 1

        # ⛔ Skip trailing spaces at the end
        while currentIndex >= 0 and s[currentIndex] == ' ':
            currentIndex -= 1

        # 🔁 Count characters of the last word until we hit a space or start of string
        while currentIndex >= 0 and s[currentIndex] != ' ':
            lastWordLength += 1      # ➕ Increment last word length
            currentIndex -= 1        # ⬅ Move backward in the string

        # 📦 Return final answer
        return lastWordLength