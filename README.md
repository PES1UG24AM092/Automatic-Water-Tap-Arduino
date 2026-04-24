# Automatic Water Tap
**MPCA Mini Project - PES University** [cite: 1, 2]

## Team Members
* **Dilipan Y** (PES1UG24AM092) 
* **Sunay Hegde** (PES1UG24AM903) 
* **Gaurav Girish** (PES1UG24AM103) 

## Project Overview
This project is an automatic, contactless water or sanitizer dispenser built around an **Arduino Uno**[cite: 13]. It uses an **HC-SR04 ultrasonic sensor** to detect hands and automatically activates a pump via a **relay**[cite: 14]. This system is critical for maintaining hygiene in public spaces[cite: 14].

## MPCA Concepts Demonstrated
This project applies several core Microprocessor and Computer Architecture concepts on the **ATmega328P**:
* **Digital I/O:** Port manipulation via DDR and PORT registers[cite: 26].
* **Timers:** Using **16-bit Timer1** through `pulseIn()` for microsecond pulse measurement[cite: 27].
* **USART:** Serial communication at **9600 baud** for status monitoring[cite: 27].
* **Arithmetic & Control:** Integer arithmetic for distance conversion and conditional branching for actuator output[cite: 28, 29].

## Hardware Components
* **Arduino Uno:** The brain of the project[cite: 10].
* **HC-SR04 Ultrasonic Sensor:** Measures distance (2-400 cm)[cite: 10].
* **5V Relay Module:** Isolates the Arduino from the pump supply[cite: 10].
* **DC Mini Pump:** Dispenses fluid when the relay closes[cite: 10].
