# TASK 08 – CPU States and Protection

## 1. Introduction

CPU protection mechanisms prevent unauthorized programs from accessing critical operating-system resources. They are important for maintaining the safety and reliability of hospital systems.

## 2. User Mode and Kernel Mode

- **User Mode:** Applications execute with restricted privileges.
- **Kernel Mode:** The operating system executes privileged instructions and manages hardware resources.

The mode bit indicates the current CPU execution mode.

## 3. Privileged Instructions

Privileged instructions can only execute in kernel mode. Examples include controlling interrupts and managing memory protection.

## 4. Interrupts, Traps and Timer Interrupts

- **Interrupt:** A signal that requests CPU attention from hardware.
- **Trap:** A software-generated exception or system-call event.
- **Timer Interrupt:** Periodically returns control to the operating system for scheduling.

## 5. Interrupt Protection in Patient Monitors

If a program could disable interrupts, patient monitors might fail to process urgent sensor readings and alarms on time.

The operating system must control interrupt handling to maintain predictable response times.

## 6. Memory Protection

Memory-management hardware, such as the Memory Management Unit (MMU), prevents one process from accessing another process's protected memory.

## 7. Alternative Concept and Complexity Analysis

Polling checks sensor values repeatedly instead of waiting for interrupts.

- Polling may introduce delay depending on the polling interval.
- Interrupt-driven processing responds when an event occurs.
- Polling consumes CPU time even when no new data is available.

## 8. Conclusion

CPU modes, privileged instructions, interrupts and memory protection help maintain hospital-system security and patient safety.