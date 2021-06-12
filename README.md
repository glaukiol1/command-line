<div align="center">

# Command Line
A simple CMDL written in C++, can be compiled to microcode, and used in your low level programms or your own OS!

</div>

<br />
<br />

# Uses
This command line is made to for OS programmers to have a simple shell to use. It is a fully open-source & 100% customizable shell, hence it is a good place to start for new OS-level programmers.

# Compiling The Code
To compile the C++ code into microcode, it is a long process. Here, I will show you how to compile it to binary, which can run on your system. You can find plenty of articles on how to complie C++ to microcode.

```sh
$ g++ -Wall -Wextra -g cmd.cpp -O3 -march=native
# compile the main "cmd.cpp" file, with the other flags for better performance.
```

Now you should have one of the two files, `a.exe` or `a.out`. Don't worry if the output file is named different than `a.exe` or `a.out`, depending on your compiler & version, it might be different. Now you can run these files and you have the shell! As I said, you can find articles on compiling it further to mirocode, so you can use it on your own OS.

# Commands
Currently, these are the commands implemented;
```sh
echo
clear
.help
ls
# run the .help command for details.
```
