# Dual-Brightness 12V LED Driver using Buck Converter

A hardware project to efficiently drive two 12V, 5W LED bulbs with dual brightness settings (full/half), powered from a 230V AC input using a buck converter and Arduino Nano.

---

## 🔧 Overview

- Converts 230V AC → 30V DC using transformer + rectifier.
- Regulates 30V → 12V using a buck converter.
- Brightness controlled via PWM from Arduino Nano:
  - **37.5%** duty cycle for full brightness.
  - **26.5%** duty cycle for half brightness.

---

## 📦 Components Used

- Arduino Nano  
- MOSFET IRF450  
- Diode IN4148  
- Inductor (1.8 mH)  
- Capacitors (1.7 μF, 10 mF)  
- 12V, 5W LED x2  
- Transformer (230V to 30V AC)  
- Bridge Rectifier

---

## 🔁 Operation Summary

1. **AC to DC Conversion**:
   - 230V AC → 30V AC via transformer.
   - Rectifier + filter capacitor → 30V DC.

2. **Buck Converter Control**:
   - MOSFET switching driven by Arduino Nano via PWM.
   - PWM duty cycle controls LED brightness.

3. **LED Output**:
   - Two 12V LEDs in parallel receive regulated DC with adjustable brightness.

---

## 📂 Files

- `led_pwm_control.ino` – Arduino code for PWM switching`
---

## 🎯 Applications

- Energy-Efficient Lighting
- Voltage Regulation Systems
- Educational Demonstration of Buck Converter Principles
