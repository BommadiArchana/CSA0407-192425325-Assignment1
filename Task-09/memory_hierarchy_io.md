# TASK 09 – Memory Hierarchy and I/O Systems

## 1. Introduction

Memory hierarchy organizes storage according to speed, capacity and cost. I/O systems manage the transfer of data between devices, memory and processors.

## 2. Levels of Memory Hierarchy

1. Registers – Fastest storage inside the CPU.
2. Cache Memory – Stores frequently accessed data.
3. Main Memory (RAM) – Holds active programs and data.
4. SSD – Provides fast persistent storage.
5. Hard Disk – Provides large-capacity persistent storage.
6. Network Storage – Allows shared access to data across systems.

Higher levels generally provide faster access and smaller capacity.

## 3. Data Placement in Hospital Systems

- MRI images: SSD or high-capacity storage for fast processing and retrieval.
- Patient records: Reliable database storage with backup.
- Monitor readings: RAM for immediate processing and persistent storage for historical records.

## 4. I/O Techniques

**Programmed I/O:** The CPU repeatedly checks the device and transfers data.

**Interrupt-Driven I/O:** The device interrupts the CPU when it needs attention.

**Direct Memory Access (DMA):** Transfers data directly between a device and main memory with limited CPU involvement.

DMA is suitable for MRI scanners because large image data can be transferred efficiently.

## 5. Effect of Caching

Caching stores frequently accessed records in faster memory. It reduces repeated storage access and improves database lookup speed.

## 6. Alternative Concept and Complexity Analysis

If the MRI scanner used interrupt-driven I/O for every word instead of DMA:

- The number of interrupts would increase.
- CPU involvement would increase.
- Processing overhead would be higher.
- DMA would generally be more efficient for large image transfers.

## 7. Conclusion

A suitable memory hierarchy and I/O technique improves data-transfer efficiency, medical-image processing and patient-record retrieval.

## 8. Evidence

Include a justified data-placement table, typical access-time references and the selected I/O method for each device.