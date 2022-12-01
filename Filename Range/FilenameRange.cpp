#include <iostream>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

class FilenameRange
{
public:
    string removePathOfFile(string filePath)
    {
        int position = filePath.find_last_of("/\\");
        return filePath.substr(position + 1);
    }

    string removeExtensionOfFile(string fileName)
    {
        int positionOfIndex = fileName.find_last_of('.');
        return fileName.substr(0, positionOfIndex);
    }

    string removeWordSeparators(string fileName)
    {
        char Seperators[] = {'_', '-', '.'};
        for (char seperator : Seperators)
        {
            auto t = remove(fileName.begin(), fileName.end(), seperator);
            fileName.erase(t, fileName.end());
        }
        return fileName;
    }

    string removeWords(string fileName)
    {
        string words[] = {"tests", "test", "Tests", "Test", "spec", "Spec", "steps", "step"};
        for (string word : words)
        {
            int position = fileName.find(word, 0);
            if (position != string::npos)
                fileName.erase(position, word.length());
        }
        return fileName;
    }

    string getIndices(string filePath)
    {
        string fileName = removeWords(removeWordSeparators(removeExtensionOfFile(removePathOfFile(filePath))));

        int indexArray[2];
        int position = filePath.find(fileName, 0);
        indexArray[0] = position;
        indexArray[1] = position + fileName.length();
        string finalIndices = ("[" + to_string(indexArray[0]) + "," + to_string(indexArray[1]) + "]");
        return finalIndices;
    }
};

int main()
{
    FilenameRange obj1;

    assert(obj1.getIndices("src/Hiker_spec.re") == "[4,9]");
    cout << "Test case 1 : Passed" << endl;

    assert(obj1.getIndices("test/hiker_test.exs") == "[5,10]");
    assert(obj1.getIndices("wibble/test/hiker_spec.rb") == "[12,17]");
    assert(obj1.getIndices("hiker_steps.rb") == "[0,5]");
    assert(obj1.getIndices("hiker_spec.rb") == "[0,5]");
    assert(obj1.getIndices("test_hiker.rb") == "[5,10]");
    assert(obj1.getIndices("test_hiker.py") == "[5,10]");
    assert(obj1.getIndices("test_hiker.sh") == "[5,10]");
    assert(obj1.getIndices("tests_hiker.sh") == "[6,11]");
    assert(obj1.getIndices("test_hiker.coffee") == "[5,10]");
    assert(obj1.getIndices("hiker_spec.coffee") == "[0,5]");
    assert(obj1.getIndices("hikerTest.chpl") == "[0,5]");
    assert(obj1.getIndices("hiker.tests.c") == "[0,5]");
    assert(obj1.getIndices("hiker_tests.c") == "[0,5]");
    assert(obj1.getIndices("hiker_test.c") == "[0,5]");
    assert(obj1.getIndices("hiker_Test.c") == "[0,5]");
    assert(obj1.getIndices("HikerTests.cpp") == "[0,5]");
    assert(obj1.getIndices("hikerTests.cpp") == "[0,5]");
    assert(obj1.getIndices("HikerTest.cs") == "[0,5]");
    assert(obj1.getIndices("HikerTest.java") == "[0,5]");
    assert(obj1.getIndices("DiamondTest.kt") == "[0,7]");
    assert(obj1.getIndices("HikerTest.php") == "[0,5]");
    assert(obj1.getIndices("hikerTest.js") == "[0,5]");
    assert(obj1.getIndices("hiker-test.js") == "[0,5]");
    assert(obj1.getIndices("hiker-spec.js") == "[0,5]");
    assert(obj1.getIndices("hiker.test.js") == "[0,5]");
    assert(obj1.getIndices("hiker.tests.ts") == "[0,5]");
    assert(obj1.getIndices("hiker_tests.erl") == "[0,5]");
    assert(obj1.getIndices("hiker_test.clj") == "[0,5]");
    assert(obj1.getIndices("fizzBuzz_test.d") == "[0,8]");
    assert(obj1.getIndices("hiker_test.go") == "[0,5]");
    assert(obj1.getIndices("hiker.tests.R") == "[0,5]");
    assert(obj1.getIndices("hikertests.swift") == "[0,5]");
    assert(obj1.getIndices("HikerSpec.groovy") == "[0,5]");
    assert(obj1.getIndices("hikerSpec.feature") == "[0,5]");
    assert(obj1.getIndices("hiker.feature") == "[0,5]");
    assert(obj1.getIndices("hiker.fun") == "[0,5]");
    assert(obj1.getIndices("hiker.t") == "[0,5]");
    assert(obj1.getIndices("hiker.plt") == "[0,5]");
    assert(obj1.getIndices("hiker") == "[0,5]");
    cout << "Given all test cases are passed successfully" << endl;

    return 0;
}
