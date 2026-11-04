# TASK 10 – Measure and Compare

## 1. Introduction

Performance measurement helps evaluate the efficiency of operating-system operations. This task compares system calls, process creation and thread creation on a Linux system.

## 2. System-Call Measurements

The copy program is executed with different buffer sizes. The number of read() and write() system calls is recorded using strace -c.

## 3. User Mode and Kernel Mode

The time command measures the execution time of a program.

- User time: Time spent executing instructions in user mode.
- System time: Time spent executing kernel operations.
- Real time: Total elapsed execution time.

## 4. Process and Thread Creation

The task compares the time required to create:

- 1,000 processes using fork().
- 1,000 threads using pthread_create().

Processes have separate address spaces, while threads share resources within the same process.

## 5. Measurement Table

| Operation | Measurement | Actual Result |
|---|---|---|
| Copy with 1-byte buffer | read() calls | To be measured |
| Copy with 512-byte buffer | read() calls | To be measured |
| Copy with 4096-byte buffer | read() calls | To be measured |
| 1,000 processes | Creation time | To be measured |
| 1,000 threads | Creation time | To be measured |

## 6. Alternative Concept and Complexity Analysis

If threads were used instead of processes:

- Thread creation generally requires fewer resources.
- Threads share memory and process resources.
- Processes provide stronger isolation.
- Threads require synchronization when accessing shared data.

## 7. Conclusion

Performance measurements help compare system-call overhead, process creation and thread creation. The results support decisions about resource utilization and operating-system efficiency.

## 8. Evidence

Include actual execution times, system-call counts, output screenshots and a comparison of process and thread creation.