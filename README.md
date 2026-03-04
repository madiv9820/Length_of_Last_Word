# [Length of Last Word 📝](https://leetcode.com/problems/length-of-last-word/description/?envType=study-plan-v2&envId=top-interview-150)

### 📌 Problem Summary

You are given a string `s` that contains:
- English letters (`a–z`, `A–Z`)
- Spaces `" "`

Your task is to return the **length of the last word** in the string.

### 🧠 What is a Word?

A **word** is defined as: *A continuous sequence of non-space characters.*

In simple terms:
- Words are separated by spaces.
- A word does not contain any spaces.
- The string is guaranteed to have at least one word.

### 🔍 What You Need to Do
1. Look at the given string.
2. Identify the last word (the final group of letters).
3. Count how many characters it has.
4. Return that number.

**⚠️ Important:**
- The string may contain **extra spaces at the beginning or end**.
- There may be **multiple spaces between words**.
- You should ignore unnecessary spaces.

### 📘 Examples
- **Example 1:** <br>
**Input:** **`s = "Hello World"`** <br>
**Output:** **`5`** <br>
**Explanation:** The last word is **`"World"`** with length 5.

- **Example 2:** <br>
**Input:** **`s = "   fly me   to   the moon  "`** <br>
**Output:** **`4`** <br>
**Explanation:** The last word is **`"moon"`** with length 4.

- **Example 3:** <br>
**Input:** **`s = "luffy is still joyboy"`** <br>
**Output:** **`6`** <br>
**Explanation:** The last word is **`"joyboy"`** with length 6.

### 📏 Constraints
- **`1 <= s.length <= 10⁴`**
- **`s`** contains only English letters and spaces.
- There is **at least one word** in the string.

### 🎯 Key Takeaway
This problem checks your understanding of:
- String handling
- Ignoring unnecessary spaces
- Identifying word boundaries

## 🧠 Approaches

| **Approach**                        | **Description**                                                                                                                              | **Time Complexity** | **Space Complexity**          | **Pros**                                                                     | **Cons**                                                                                               |
| ----------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------- | ------------------- | ----------------------------- | ---------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------ |
| [**Forward Iteration with Counters**](https://github.com/madiv9820/Length_of_Last_Word/tree/Approach_01-Two_Pointers) | Traverse the string from start to end. Maintain a counter for the current word, and update the last word length when a space is encountered. | O(n)                | O(1)                          | ✅ Works in-place, minimal memory. <br> ✅ Handles multiple spaces gracefully. | ⚠️ Slightly more code. <br> ⚠️ Logic can be verbose in some languages.                                 |
| [**Split-based / Tokenization**](https://github.com/madiv9820/Length_of_Last_Word/tree/Approach_02-Word_Extraction)      | Trim leading/trailing spaces, split the string into words, then compute the length of the last word.                                         | O(n)                | O(n) (for the array of words) | ✅ Very readable and straightforward. <br> ✅ Minimal logic required.          | ⚠️ Uses extra memory for the list/array. <br> ⚠️ Slight overhead for long strings.                     |
| [**Reverse Iteration from End**](https://github.com/madiv9820/Length_of_Last_Word/tree/Approach_03-Reverse_Traversal)      | Start from the string’s end, skip trailing spaces, then count characters until a space or start is reached.                                  | O(n)                | O(1)                          | ✅ Very memory-efficient. <br> ✅ Often the fastest approach.                  | ⚠️ Slightly less intuitive. <br> ⚠️ Edge cases (all spaces or empty string) must be handled carefully. |

---