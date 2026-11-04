# TASK 12 – Re-evaluate and Adapt the Design

## 1. Introduction

The hospital introduces remote patient-monitoring devices in patients' homes. These devices transmit readings through the internet, and patient records are moved to a cloud-based service shared with partner hospitals.

The original operating-system design must be re-evaluated to support these changes.

## 2. A. Impact Analysis

The new requirements affect:

- Operating-system types used in remote devices.
- Network communication and distributed services.
- Patient-record storage and cloud access.
- Authentication and data protection.
- Reliability and response-time requirements.

## 3. B. Evaluation of the Original Design

The original design provides specialized operating systems for monitors, tablets, workstations and servers.

However, remote monitoring introduces additional requirements:

- Secure internet communication.
- Reliable transmission of patient readings.
- Cloud-based record storage.
- Remote device management.
- Protection against unauthorized access.

Therefore, the original design needs modifications to support remote healthcare services.

## 4. C. Adaptation or Redesign

The revised design includes:

1. Embedded real-time operating systems for home-monitoring devices.
2. Secure network communication for transmitting sensor readings.
3. Cloud-based distributed storage for shared patient records.
4. Authentication and encryption to protect patient information.
5. Redundant cloud services and backup mechanisms.
6. Centralized monitoring and remote device management.

## 5. D. Evidence-Based Defence

The revised design is suitable because:

- Real-time operating systems support predictable device responses.
- Secure communication protects patient information.
- Cloud storage supports access from multiple hospitals.
- Distributed services improve scalability.
- Redundancy and backups improve availability.

## 6. Alternative Concept and Complexity Analysis

A complete redesign using only centralized cloud processing may reduce local device complexity.

However, it introduces dependence on internet connectivity and network latency.

Keeping essential monitoring and alarm functions locally allows home devices to continue operating during temporary network failures.

Cloud services can manage long-term records, analysis and sharing.

## 7. Final Decision

**Decision: Modify the original design.**

The original specialized operating-system approach should be retained, with additional embedded real-time monitoring, secure internet communication and cloud-based distributed services.

This approach balances patient safety, reliability, scalability and security.

## 8. Conclusion

Modifying the original smart-hospital design provides support for remote patient monitoring and cloud-based medical records without sacrificing the essential reliability and security requirements of healthcare systems.

## 9. Evidence

Include the impact analysis, revised architecture diagram, security mechanisms, design comparison and evidence supporting the final decision.