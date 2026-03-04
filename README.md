# 📌 Length of Last Word – Word Extraction Approach

### 🧠 Problem Statement

Given a string `s` consisting of words and spaces, return the **length of the last word** in the string.

A **word** is defined as a maximal substring consisting only of non-space characters.

### 💡 Approach – Extract All Words, Then Measure the Last One

Instead of directly computing the last word length, this approach:

1. 🔁 Traverses the string character by character
2. 🧩 Extracts each word manually
3. 📦 Stores all words in a container
4. 📐 Returns the length of the last stored word

### 🚀 Algorithm Steps
#### 1️⃣ Traverse the String
- Iterate through each character.
- Skip spaces.
- When a non-space character is found → start forming a word.

#### 2️⃣ Build Each Word
- Continue appending characters until:
    - A space is encountered
    - OR the string ends

#### 3️⃣ Store the Word
- Save the constructed word into:
    - `char**` (C)
    - `vector<string>` (C++)
    - `List[str]` (Python)

#### 4️⃣ Return the Last Word Length
- Access the last stored word.
- Return its length.

### 🛠 Language Implementations
#### 🅲 
- Uses dynamic memory allocation (malloc)
- Stores words in char**
- Requires manual memory cleanup (free)

#### 🅲++
- Uses vector<string>
- Automatic memory management
- Cleaner syntax than C

#### 🐍 Python
- Uses list of strings
- Automatic garbage collection
- Most concise implementation

### 🧮 Complexity Analysis
| **Complexity** | **Value**                       |
| ---------- | --------------------------- |
| ⏱️ Time    | O(n)                        |
| 📦 Space   | O(n²) (C/C++)               |
| 📦 Space   | O(n) (Python split version) |

Where `n` is the length of the string.

**Why O(n²) in C/C++?**
- Allocating space for up to `n` words
- Each word can be up to length `n`

### ✅ Advantages
✔ Easy to understand <br>
✔ Clear separation of words <br>
✔ Good for learning string parsing <br>
✔ Demonstrates dynamic memory handling (C)

### ⚠️ Limitations
❌ Uses unnecessary extra space <br>
❌ Stores all words when only the last word is needed <br>
❌ Not optimal for interview settings

### 🎯 Interview Insight

While this solution works correctly, interviewers typically expect:
- Reverse traversal
- O(1) extra space
- No full word storage

This implementation is best categorized as a **brute-force word extraction approach.**

---