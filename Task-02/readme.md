# TASK 02 – Types of Operating Systems

## 1. Introduction

A smart hospital requires different operating-system types based on the performance, reliability, processing and availability needs of each computing environment.

## 2. Suitable Operating Systems for Each Environment

| Environment | Suitable OS Type | Justification |
|---|---|---|
| Bedside Patient Monitors | Hard Real-Time OS | Guarantees alarm response within the required 10 milliseconds. |
| Nurses' Handheld Tablets | Handheld/Mobile OS | Supports portability, touch interface and battery efficiency. |
| Doctors' Workstations | Desktop OS | Supports multiple applications and graphical interfaces. |
| Central Database Server | Clustered OS | Provides high availability and fail-over during server failure. |
| MRI Imaging Server | Multiprocessor OS | Supports parallel processing of large MRI images. |
| Partner Hospital Link | Distributed OS | Enables communication and resource sharing between hospitals. |

## 3. Types of Operating Systems

1. **Mainframe OS:** Handles large-scale data processing and multiple users.
2. **Desktop OS:** Provides a graphical interface for personal computers and workstations.
3. **Multiprocessor OS:** Uses multiple processors to improve processing performance.
4. **Distributed OS:** Manages resources across multiple connected computers.
5. **Clustered OS:** Connects multiple computers to provide availability and fail-over.
6. **Hard Real-Time OS:** Ensures tasks meet strict deadlines.
7. **Soft Real-Time OS:** Prioritizes time-sensitive tasks but allows occasional deadline delays.
8. **Handheld OS:** Designed for portable devices with limited battery and resources.

## 4. Symmetric vs Asymmetric Multiprocessing

| Symmetric Multiprocessing (SMP) | Asymmetric Multiprocessing (AMP) |
|---|---|
| All processors share operating-system responsibilities. | One master processor controls other processors. |
| Workload is distributed among processors. | Tasks are assigned to specific processors. |
| Provides balanced processing. | Provides specialized task control. |

**Recommendation:** SMP is suitable for the MRI imaging server because multiple processors can share image-processing workloads and improve throughput.

## 5. Clustered Database with Fail-over

The hospital database should use a clustered system with at least two servers.

- Primary server handles database requests.
- Secondary server remains ready as a backup.
- If the primary server fails, the secondary server takes over.
- Fail-over reduces downtime and improves availability.

## 6. Alternative Concept and Complexity Analysis

If the database used one large multiprocessor machine instead of a cluster:

- **Availability:** A single machine creates a single point of failure, whereas a cluster provides fail-over.
- **Recovery:** A clustered system can switch to another server within seconds, reducing service interruption.
- **Cost:** One large machine may have a lower initial setup cost, while clustering requires additional hardware and maintenance.
- **Throughput:** Both approaches support parallel processing, but a cluster can distribute workloads across multiple machines.
- **Memory:** A large multiprocessor system uses shared memory, whereas a cluster uses separate memory in each machine.

## 7. Conclusion

A smart hospital should use a combination of real-time, handheld, desktop, multiprocessor, distributed and clustered operating systems. A clustered database with fail-over provides better availability than depending on a single large server. The selected operating-system types meet the different performance and reliability requirements of the hospital.