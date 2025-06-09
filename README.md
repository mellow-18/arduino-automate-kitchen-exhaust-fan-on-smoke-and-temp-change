# Smart Kitchen Safety System with Arduino UNO, DHT22, MQ-2, and Relay
----------------------------------------------------------------------------
# This project is an automated kitchen safety and ventilation system built using an Arduino UNO R3, a DHT22 temperature & humidity sensor, an MQ-2 gas/smoke sensor, and a relay module connected to an AC 220V exhaust fan.

🚀 Project Overview
Modern kitchens, especially those using gas-based appliances, face potential risks from high temperatures, excess humidity, and toxic or flammable gas leaks. This project addresses these concerns by implementing a smart system that:

  * Monitors kitchen temperature and humidity in real-time.
  * Detects the presence of smoke or gases like LPG using the MQ-2 sensor.
  * Automatically activates an exhaust fan when critical conditions are met.

This ensures the kitchen remains safe, well-ventilated, and energy-efficient without requiring manual intervention.

🛠️ How It Works
  * The DHT22 sensor monitors ambient temperature and humidity levels.
  * The MQ-2 sensor continuously scans for harmful gases and smoke (e.g., LPG leaks).
  * A relay module controls the 220V kitchen exhaust fan based on the following logic:
      * If temperature exceeds 30°C
      * If humidity exceeds 90%
      * If smoke or gas is detected

Once any of these conditions are met, the fan is automatically turned ON to ventilate the space.
The fan turns OFF once conditions return to safe levels, making the system fully automated.

🔒 Why This Matters
🔐 Safety: Helps prevent fire hazards by early detection of gas leaks and smoke.
    * Environmental Control: Maintains a comfortable and safe cooking environment by regulating temperature and humidity.
    * Automation: Reduces reliance on manual controls, especially important in emergency scenarios.
    * Energy Efficiency: The fan runs only when necessary, conserving electricity.

# Required equipment:
#--------------------------------------------------
1. Arduino UNO R3 / ESP32 or similar microcontroller
2. MQ2 Smoke Sensor
3. DHT22 Temperature Sensor
4. AC 220V Kitchen Fan
5. 5V Single Channel relay Module
6. 5v 2Amp AC-DC Adapter
7. Jumper Wires or Normal wires
8. Breadboard for initial testing(optional)
9. Hot gum gun or 2 way gum tape
10. Testers & Multimeter
11. Laptop to compile code on Arduino IDE

# Refer electrical circuit diagram for reference in the image - kitchen-exhaust-fan-circuit-diagram.png or refer this link => https://crcit.net/c/8bffc5150d964837b71ea412205603ec

Download portable Arduino IDE from: https://docs.arduino.cc/software/ide-v1/tutorials/PortableIDE/

# Note: Download the .ino file and directly upload the file on the Arduino IDE.
# Verify & Upload

# Done.
