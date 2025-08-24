# 💧 IoT-Based Water Level Monitoring System using NodeMCU (ESP8266)

This project is an **IoT-based Water Level Monitoring System built with NodeMCU (ESP8266 and an Ultrasonic Sensor.  
The system monitors water levels in a tank and provides **real-time alerts** using LEDs and a buzzer.  

- Green LED → Safe water level  
- Yellow/White LED → Medium water level (caution)  
- Red LED + Buzzer → High water level (overflow warning)  

The project is structured to be easy to understand , with source code, images, and demonstration videos included.


## 📂 Folder Structure
Water-Level-Monitoring-System/
│── Code/ # Arduino/ESP8266 source code
│── Images/ # Circuit diagrams & setup images
│── Videos/ # Demo videos of the working project
│── README.md # Project documentation



## 🛠️ Components Required
- **NodeMCU (ESP8266)**  
- **Ultrasonic Sensor (HC-SR04)**  
- **Jumper Wires**  
- **Breadboard**  
- **3 LEDs (Green, Yellow/White, Red)**  
- **Resistors (for LEDs)**  
- **Buzzer**  
- **Power Supply (5V via USB/Adapter)**  

---

## ⚙️ Working Principle
1. The **ultrasonic sensor** measures the water level in the tank.  
2. The system is divided into **three levels**:  
   - **Level 1 (Low water)** → Green LED ON.  
   - **Level 2 (Medium water)** → Yellow/White LED ON.  
   - **Level 3 (High water/Overflow)** → Red LED ON + Buzzer sound.  
3. The **NodeMCU** processes the readings and controls the LEDs & buzzer accordingly.  

 🚀 Features
- Real-time water level detection using **ultrasonic sensor**.  
- **Visual alerts** with Green, Yellow/White, and Red LEDs.  
- **Audible alert** with buzzer at high water level.  
- Compact and low-cost design for **IoT applications**.  


## 🌟 Future Enhancements
- Add **IoT integration** (Blynk, MQTT, ThingSpeak) to monitor water level on a smartphone.  
- Send **SMS/Email alerts** on overflow conditions.  
- Display real-time data on an **LCD or OLED screen**.  

