# TASK 07 – Process Control System Calls

## 1. Introduction

Process-control system calls allow the operating system to create, execute, manage and terminate processes. They are essential for running commands on a database server.

## 2. Important Process-Control System Calls

1. **fork():** Creates a new child process.
2. **exec():** Replaces the current process image with a new program.
3. **wait():** Makes the parent wait for a child process to finish.
4. **exit():** Terminates a process and returns an exit status.

## 3. How a Shell Executes a Command

1. The shell receives a command.
2. It calls fork() to create a child process.
3. The child uses an exec() function to execute the command.
4. The parent uses wait() to collect the child's exit status.
5. The shell displays the next prompt.

## 4. Zombie and Orphan Processes

- **Zombie Process:** A child has terminated, but its parent has not collected its exit status.
- **Orphan Process:** A child continues running after its parent terminates. It is adopted by an appropriate system process.

The operating system handles these processes through process-management mechanisms.

## 5. Why fork() Followed by exec()?

fork() creates a separate child process, while exec() loads the requested program into that child. This separation allows the shell to retain control and manage command execution.

## 6. Alternative Concept and Complexity Analysis

posix_spawn() can create a process and execute a program through a combined interface.

Compared with fork() followed by exec(), it may reduce process-creation overhead in suitable environments.

Threads share the same process resources, while separate processes provide stronger isolation.

## 7. Conclusion

Process-control system calls help the shell execute commands, manage child processes and collect exit statuses safely.

## 8. Evidence

Include the completed C program, execution output, process diagram and explanation of zombie and orphan processes.