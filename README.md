# 📌 Length of Last Word – Two Pointers Approach

### 🧠 Problem Statement

Given a string `s` consisting of words and spaces, return the **length of the last word** in the string.

A **word** is defined as a maximal substring consisting of non-space characters only.

### 💡 Approach – Two Pointers (Single Pass)

We solve this problem using a **single traversal (O(n))** approach with two tracking variables:
- **`currentWordLength`** → tracks the length of the current word.
- **`lastWordLength`** → stores the length of the most recently completed word.

### 🔍 Core Idea
1. Traverse the string from left to right.
2. If the character is **not a space** → increment `currentWordLength`.
3. If the character **is a space**:
    - If we were building a word (`currentWordLength > 0`), update `lastWordLength`.
    - Reset `currentWordLength` to `0`.
4. After the loop ends:
    - We may still be inside a word (if string doesn't end with space).
    - Do one final update.
5. Return `lastWordLength`.

### 🚀 Why This Works
- Handles **multiple spaces**
- Handles **trailing spaces**
- Uses **constant extra space O(1)**
- Single traversal → **O(n) time complexity**

### 🧮 Complexity Analysis
| **Type**  | **Complexity** |
| ----- | ---------- |
| Time  | O(n)       |
| Space | O(1)       |

Where `n` is the length of the string.

---