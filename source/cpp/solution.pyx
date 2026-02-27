# cython: language_level=3
# 🐍 Cython wrapper for C++ Solution class

from libcpp.string cimport string       # 🔤 C++ std::string
from libcpp.memory cimport unique_ptr   # Optional smart pointer management

# 📦 Declare the C++ class from the header
cdef extern from "solution.hpp":
    cdef cppclass Solution:
        Solution() except +             # Constructor
        int lengthOfLastWord(string s)  # Method to wrap

# 🧩 Cython wrapper class
cdef class cppSolution:
    cdef Solution* ptr  # 🔗 Pointer to C++ Solution

    def __init__(self) -> None:
        """
        ⚡ Initialize C++ Solution instance
        """
        self.ptr = new Solution()

    def __dealloc__(self):
        """
        🗑️ Clean up C++ object to prevent memory leak
        """
        if self.ptr is not NULL:
            del self.ptr

    def cpp_lengthOfLastWord(self, s: str) -> int:
        """
        🔄 Convert Python string to C++ string, call C++ method,
        and return the result as Python int.
        """
        cdef string cpp_s = s.encode('utf-8')               # 🔤 Convert Python str -> C++ string
        cdef int result = self.ptr.lengthOfLastWord(cpp_s)  # 🧮 Call C++ method
        return result                                       # ✅ Return Python int