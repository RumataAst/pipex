Pipex is a Unix-based project at 42 focused on building a program that replicates the behavior of shell pipes (|) for command execution, simulating the command cmd1 | cmd2. This project involves handling process creation and inter-process communication (IPC) using pipes and file descriptors in C.

Through this project, I learned how to:

  -Manage multiple processes using fork()
  
  -Redirect input and output using file descriptors
  
  -Connect processes with pipe() to pass data between commands
  


Program will be executed as follows:

./pipex file1 cmd1 cmd2 file2


It takes 4 arguments:

• file1 and file2 are file names.

• cmd1 and cmd2 are shell commands with their parameters.
