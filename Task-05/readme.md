# TASK 05 – Examine System Calls

## 1. Introduction

System calls are the interface between user programs and the operating system kernel. They allow applications to request services such as file access, process creation and device management.

## 2. Categories of System Calls

1. **Process Control:** Creates, executes and terminates processes using fork(), exec() and wait().
2. **File Management:** Creates, opens, reads, writes and closes files.
3. **Device Management:** Controls and accesses hardware devices.
4. **Information Maintenance:** Retrieves system information such as time, process ID and system details.
5. **Communication:** Enables data exchange between processes using pipes and sockets.
6. **Protection:** Controls access permissions and protects system resources.

## 3. Steps Involved in a read() System Call

1. **Library Call:** The program calls the read() function.
2. **Trap:** A system call instruction requests kernel service.
3. **Mode Switch:** The CPU switches from user mode to kernel mode.
4. **Kernel Work:** The kernel performs the requested reading operation.
5. **Return:** The result is returned to the program and execution continues in user mode.

## 4. Parameter Passing to the Kernel

System call parameters are passed through:

- **Registers:** Arguments are stored in CPU registers.
- **Memory Block:** Arguments are stored in a memory block, and its address is passed.
- **Stack:** Arguments are placed on the process stack.

## 5. System Call Tracing Using strace

The strace utility traces system calls made by a program. It displays system call names, arguments, return values and errors.

Example command:

`strace -c ./system_calls`

It provides a summary of system calls and their execution time.

## 6. Alternative Concept and Complexity Analysis

C library functions such as fopen(), fread() and fwrite() provide buffered file operations, reducing the number of direct system calls.

Direct read() and write() operations may require more system calls when handling small data blocks.

Buffered I/O improves efficiency by grouping multiple operations, while direct system calls provide greater control over file operations.

## 7. Conclusion

System calls provide communication between user programs and the operating system kernel. Understanding their categories, execution steps and performance helps develop efficient programs.