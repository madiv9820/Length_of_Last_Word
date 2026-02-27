# cython: language_level=3
# 🐍 Cython wrapper for C function lengthOfLastWord

from libc.stdlib cimport free       # 🗑️ Free memory
from libc.string cimport strdup     # 🔤 Duplicate string

# 📦 Declare the C function
cdef extern from "solution.h":
    int lengthOfLastWord(char* s)

# 🧩 Cython wrapper class
cdef class cSolution:

    def c_lengthOfLastWord(self, s: str) -> int:
        """
        🔄 Convert Python string to C string, call C function,
        and return the result as Python int.
        """
        # ⚡ Declare C variables at the top
        cdef char* c_s
        cdef int result

        # 🔤 Convert Python str to C string
        c_s = strdup(s.encode('utf-8'))
        if c_s == NULL:
            raise MemoryError("Failed to allocate memory for C string")

        try:
            # 🧮 Call the C function
            result = lengthOfLastWord(c_s)
        finally:
            # 🗑️ Free the allocated C string
            free(c_s)

        return result  # ✅ Return Python int