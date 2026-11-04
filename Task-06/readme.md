# TASK 06 – Cost of System Calls

## 1. Introduction

System calls allow user programs to access kernel services. However, each system call introduces overhead due to the transition between user mode and kernel mode.

## 2. Why System Calls Cost More

An ordinary function call executes within the same process context. A system call requires a controlled transition to kernel mode, parameter validation and kernel execution before returning to user mode.

## 3. Effect of Buffer Size

When a database backup program copies a file, the buffer size affects the number of read() and write() calls.

For a file of 10,000 bytes:

| Buffer Size | Expected read() Calls |
|---|---:|
| 1 byte | 10,001 |
| 512 bytes | 21 |
| 4096 bytes | 4 |

The counts follow the assignment's expected output for the supplied test program.

## 4. Library Buffering

Functions such as fread() and fwrite() use library buffering to reduce the number of system calls.

Larger buffers generally reduce kernel transitions, while smaller buffers may increase overhead.

## 5. Buffer Size Comparison

The supplied program tests buffer sizes of 1, 512 and 4096 bytes.

Record the actual system-call counts and execution times obtained using strace and time.

## 6. Alternative Concept and Complexity Analysis

Memory-mapped files using mmap() provide an alternative to repeated read() and write() calls.

- read()/write(): Transfer data between user space and kernel space.
- mmap(): Maps file contents into the process address space.

Memory mapping may reduce explicit system-call frequency and copying, but it introduces page-fault handling and memory-management overhead.

## 7. Conclusion

Buffer size strongly affects system-call frequency and file-copying performance. A suitable buffer balances memory usage and execution efficiency.

## 8. Evidence

Include the completed C program, output for all buffer sizes, strace -c results, execution times and a comparison table.