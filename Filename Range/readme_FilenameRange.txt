*Description-
Given Program implements a function that is given a string filename
and which returns a pair of integers specifying the start and
end indexes (into the filename) of the selected range.



*Test cases:
Test cases are written based on considering below points which are  as:
1.First, it assumes you will want to keep the extension.
Eg:  "hiker.cpp" ==> "hiker" is selected.
     "diamond.h" ==> "diamond" is selected.



2.Second, if the filename includes the word "tests", "test", "spec", or
  "step" (case insensitive) it assumes you will want to keep those too,
  together with any 'separator' characters (dot, underscore, hyphen).
Eg:   "HikerTest.js"  ==> "Hiker" is selected.
      "Diamond_Spec.feature" => "Diamond" is selected.
      "fizz.buzz-tests.js" => "fizz.buzz" is selected.



3.Third, if the filename is in a dir/
  it assumes you will also want to keep that.
Eg: "test/FizzBuzz_test.exs" => "FizzBuzz" is selected.
    "src/test/Roman.spec.re" => "Roman" is selected.

The program is tested for different filenames(filepaths) to check whether it is giving the required output or not.
The test cases for which program is tested are given below as :

1.filePath(filename) = "src/Hiker_spec.re": [4,9],

2.filePath = "test/hiker_test.exs": [5,10],

3.filePath = "wibble/test/hiker_spec.rb": [12,17],

4.filePath = "hiker_steps.rb": [0,5],

5.filePath = "hiker_spec.rb": [0,5],

6.filePath =  "test_hiker.rb": [5,10],

7.filePath =  "test_hiker.py": [5,10],

8.filePath =  "test_hiker.sh": [5,10],

9.filePath =  "tests_hiker.sh": [6,11],

10.filePath =  "test_hiker.coffee": [5,10],

11.filePath = "hiker_spec.coffee": [0,5],

12.filePath = "hikerTest.chpl": [0,5],

13.filePath =  "hiker.tests.c": [0,5],

14.filePath =  "hiker_tests.c": [0,5],

15.filePath =  "hiker_test.c": [0,5],

16.filePath =  "hiker_Test.c": [0,5],

17.filePath =  "HikerTests.cpp": [0,5],

18.filePath =  "hikerTests.cpp": [0,5],

19.filePath =  "HikerTest.cs": [0,5],

20.filePath =  "HikerTest.java": [0,5],

21.filePath =  "DiamondTest.kt": [0,7],

22.filePath =  "HikerTest.php": [0,5],

23.filePath =  "hikerTest.js": [0,5],

24.filePath =  "hiker-test.js": [0,5],

25.filePath =  "hiker-spec.js": [0,5],

26.filePath = "hiker.test.js": [0,5],

27.filePath =  "hiker.tests.ts": [0,5],

28.filePath = "hiker_tests.erl": [0,5],

29.filePath = "hiker_test.clj": [0,5],

30.filePath =  "fizzBuzz_test.d": [0,8],

31.filePath =  "hiker_test.go": [0,5],

32.filePath ="hiker.tests.R": [0,5],

33.filePath =  "hikertests.swift": [0,5],

34.filePath =  "HikerSpec.groovy": [0,5],

35.filePath =  "hikerSpec.feature": [0,5],

36.filePath =  "hiker.feature": [0,5],

37.filePath =  "hiker.fun": [0,5],

38.filePath =  "hiker.t": [0,5],

39.filePath =  "hiker.plt": [0,5],

40.filePath =  "hiker": [0,5]