from typing import List

class pySolution:
    def py_lengthOfLastWord(self, s: str) -> int:   
        # 🎯 This will store the final result:
        # the length of the last word.
        lastLengthWord: int = 0

        # 🧹 Step 1: Remove leading and trailing spaces using strip()
        # ✂️ Step 2: Split the string into words using split()
        # split() automatically handles multiple spaces.
        allWordsInString: List[str] = (
            s
            .strip()
            .split()
        )

        # 📐 The last word is at index -1.
        # Compute its length.
        lastLengthWord = len(allWordsInString[-1])

        # 🗑 Optional cleanup (not required in Python due to GC,
        # but explicitly deleting for clarity).
        del allWordsInString
        
        # 📦 Return final result.
        return lastLengthWord