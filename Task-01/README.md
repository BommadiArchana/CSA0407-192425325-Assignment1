# TASK 01 – Requirements of Each Computing Environment

## 1. Introduction
A smart hospital requires different operating-system requirements for patient monitors, handheld tablets, desktop workstations, database servers and MRI imaging systems. Each environment has different response-time, reliability, throughput, battery and security requirements.

## 2. Ranked Requirements

| Computing Environment | Priority | Justification |
|---|---|---|
| Bedside Patient Monitors | 1. Response Time, 2. Reliability, 3. Security | Must detect abnormal readings and generate alarms within 10 milliseconds to protect patients. |
| Nurses' Handheld Tablets | 1. Battery Life, 2. Security, 3. Reliability | Must operate throughout a shift while securely accessing patient information. |
| Doctors' Desktop Workstations | 1. Reliability, 2. Security, 3. Response Time | Must provide uninterrupted access to patient records and medical applications. |
| Central Database Server | 1. Reliability, 2. Security, 3. Throughput | Must continuously store and retrieve patient records for multiple users without data loss. |
| MRI Imaging Server | 1. Throughput, 2. Reliability, 3. Response Time | Must process large MRI images efficiently using multiple processors. |
| Partner Hospital Link | 1. Security, 2. Reliability, 3. Throughput | Must securely exchange patient records between hospitals. |

## 3. Conflicting Requirements

- Fast alarm response may conflict with heavy background processing.
- High throughput may increase resource usage.
- Strong security mechanisms may introduce additional processing overhead.
- Longer battery life may limit processing performance on handheld devices.

## 4. Patient Safety Requirements

The most critical requirement is the guaranteed response time of bedside patient monitors. An alarm must be generated within 10 milliseconds when an abnormal reading is detected. Reliability and data security are also essential to prevent incorrect readings and unauthorized access.

## 5. Lessons from Operating-System History

- Batch systems are suitable for processing large jobs but not immediate patient alarms.
- Time-sharing systems support multiple users accessing hospital resources.
- Personal computer operating systems support doctors' desktop workstations.
- Mobile operating systems are suitable for nurses' handheld tablets.
- Real-time operating systems are suitable for bedside patient monitors.

## 6. Alternative Concept and Complexity Analysis

If the entire hospital used one general-purpose operating system instead of specialized operating systems, the solution would be easier to administer but could introduce performance and reliability problems.

A general-purpose OS cannot guarantee a 10-millisecond alarm deadline under unpredictable workloads. Its scheduling delay may increase during heavy processing.

Specialized operating systems require additional administration and configuration, but they provide better control over response time, resource usage and device-specific requirements.

## 7. Conclusion

A smart hospital requires different operating-system configurations for different computing environments. Real-time response, reliability, security, battery efficiency and high throughput must be prioritized according to the role of each device. A single general-purpose operating system is not suitable for every hospital environment.