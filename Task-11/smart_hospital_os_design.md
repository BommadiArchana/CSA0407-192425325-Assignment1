# TASK 11 – Final Operating-System Recommendation

## 1. Introduction

A smart hospital requires a reliable operating-system design to support patient monitoring, medical records, imaging and communication between hospitals.

## 2. Recommended Operating-System Plan

| Environment | OS Type | Structure | Main Requirement |
|---|---|---|---|
| Patient Monitors | Hard Real-Time OS | Microkernel/Modular | Predictable response |
| Nurses' Tablets | Handheld OS | Modular | Battery efficiency |
| Doctors' Workstations | Desktop OS | Hybrid | Multitasking |
| Database Server | Clustered System | Modular/Hybrid | High availability |
| MRI Imaging Server | Multiprocessor OS | Modular | High throughput |
| Partner Hospital Link | Distributed System | Network-based | Secure communication |

## 3. Services and Protection

- Real-time alarm processing for patient monitors.
- Secure authentication and communication.
- Database backup and recovery.
- Process and memory protection.
- Resource allocation and error detection.
- Audit logging for patient records.

## 4. I/O Methods

- Patient monitors: Interrupt-driven I/O.
- Nurses' tablets: Touch and wireless communication.
- Database server: Buffered file operations and storage I/O.
- MRI imaging server: DMA for large data transfers.

## 5. Limitations and Risks

- Clustered systems require additional hardware and maintenance.
- Network failures may affect distributed communication.
- Real-time systems require careful scheduling.
- Security updates and backups require regular monitoring.
- High-performance imaging systems require significant resources.

## 6. Scalability

The proposed design can support growth from one ward to a 500-bed hospital and a group of three hospitals by adding devices, computing resources and secure network connections.

## 7. Alternative Concept and Complexity Analysis

Moving all hospital environments into virtual machines on two large servers may reduce physical hardware requirements.

However, virtualization introduces additional CPU and memory overhead. A failure of either physical server may affect multiple virtual machines.

Dedicated real-time systems and redundant critical servers provide stronger isolation and reliability for patient-monitoring operations.

## 8. Conclusion

A combination of specialized operating systems, clustered servers, secure communication and suitable I/O methods provides a reliable and scalable smart-hospital solution.

## 9. Evidence

Support the final recommendation using the measurements, comparisons and analysis obtained in Tasks 01–10.