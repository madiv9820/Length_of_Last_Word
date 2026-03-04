# 📌 Length of Last Word – Optimal Reverse Traversal Approach

### 🧠 Problem Statement
Given a string `s` containing words and spaces, return the **length of the last word** in the string.

A **word** is a maximal substring consisting of non-space characters.

### 💡 Approach – Reverse Traversal

Instead of storing all words, this approach **traverses the string from the end** to efficiently count the last word:

1. 🔁 Start from the last character of the string.
2. ⛔ Skip any trailing spaces.
3. 🔤 Count characters until a space or the start of the string is reached.
4. 📦 Return the count as the length of the last word.

This method uses **O(1) extra space** and **O(n) time**, making it highly efficient for long strings.

### 🛠 Algorithm Steps
1. Initialize **`lastWordLength = 0`**.
2. Set **`currentIndex`** to the last character of the string.
3. Skip trailing spaces:
    ```
    while currentIndex >= 0 and s[currentIndex] == ' ':
        currentIndex -= 1
    ```
4. Count the characters of the last word:
    ```
    while currentIndex >= 0 and s[currentIndex] != ' ':
        lastWordLength += 1
        currentIndex -= 1
    ```
5. Return **`lastWordLength`**.

### 🧮 Complexity Analysis
| **Complexity** | **Value** |
| ---------- | ----- |
| ⏱ Time     | O(n)  |
| 📦 Space   | O(1)  |

Where `n` is the length of the string.
- ✅ Single traversal from end to start
- ✅ No additional memory used

### ✅ Advantages
- Minimal and clean code
- Extremely efficient for long strings
- Handles trailing spaces automatically
- Interview-friendly: **O(1) space solution**

### ⚠️ Edge Cases
- Empty string → returns 0
- String with only spaces → returns 0
- Single word → counts correctly
---