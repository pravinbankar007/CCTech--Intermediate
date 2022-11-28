*Description-
cat command reads data from the file and gives their content as output. It helps us to create, view, concatenate files. 


*Test strategy-
The program is tested for the various arguments for the cat command.


*Test cases-
1.When the user executes the cat command without passing any argument then it will print standard input from the user.
2.When the user executes cat command with passing single argument and if that file is not present in that directory then it will give an error message i.e. cat file_Name : no such file or directory exists.
3.When the user executes cat command with passing single argument and if that file is present then it will print all content of that file on terminal.
4.When the user executes cat command with two or more argument and if all those files are present in that directory then it will print the content of all files on the terminal.
5.When the user executes cat command with two files as argument in which one file exist in that directory and other file does not exist then it will show the content from file for the file which is present in the directory
 and display error message for the file which is not present in the directory.




