import unittest, json, os
from timeout_decorator import timeout  # ⏱️ Enforce time limit per test
from source.cpp.solution import cppSolution

# 🏛️ Unit tests for the C++ implementation of Length of Last Word
class test_cpp_Solution(unittest.TestCase):

    def setUp(self):
        """
        📂 Load test cases from JSON file
        and initialize the C++ solution instance 🐍.
        """
        currentDirectory = os.path.dirname(os.path.abspath(__file__))       # 📍 Directory of this test file
        filePath = os.path.join(currentDirectory, 'cases/test_cases.json')  # 📄 Path to JSON test cases
        
        # 🔓 Open and parse JSON test cases
        with open(filePath, mode="r", encoding="utf-8") as read_file: 
            self.__testcases = json.load(read_file)     # 🗂️ List of test cases
            self.__solution = cppSolution()             # ⚡ Initialize C++ solution class

        return super().setUp()
    
    @timeout(1)  # ⏱️ Each test must complete within 1 second
    def test(self):
        """
        🔄 Iterate through each test case and validate
        length of the last word in the string 📝.
        """
        for testcase in self.__testcases:
            testName: str = testcase['description']             # 📝 Name/description of the test case
            s: str = testcase['input']                          # 🔤 Input string
            expectedOutput: int = testcase['expectedOutput']    # 🎯 Expected length

            # 🔍 Use subTest for clearer per-case reporting
            with self.subTest(testName):
                actualOutput: int = self.__solution.cpp_lengthOfLastWord(s=s)   # 🧮 Call the solution
                self.assertEqual(actualOutput, expectedOutput)                  # ✅ Verify correctness

# 🏁 Run tests when executed directly
if __name__ == '__main__':
    unittest.main()  # 🚀 Launch the tests