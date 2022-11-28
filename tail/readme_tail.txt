*Description-
It is unix based command. It is the complement of head command.
This command display the content of file from last line to till specified number of line. But, if we don't specified number of line then it display the till 10 number of lines from last line to beginning of the line.


Test cases-
1.when the user executes the Tail command without argument it returns new line.
2.When user executes the Tail command with single argument it returns the last 10 lines in the file if file contained more then 10 lines. but if file contained less then 10 lines then it will return all the lines present in the file. if file is present, if not then it will give an error message :-Head: cannot read: File_name : No such file or directory.
3.When the user executes the Tail command with multiple argument then it will return last 10 lines in both files but if files contained less then 10 lines it will return all the lines in the file if file is present in the directory.
4.If the file is nor present which is passed as argument at the time of running command tail ait will give an error messgage. Tail: cannot read: File_name : No such file or directory